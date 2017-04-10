#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTableView>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtSql>
#include <cctype>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("KwikServeur");
    db.setUserName("root");
    db.setPassword("");
    if(!db.open())
    {
        QMessageBox::critical(this,"Database Error",db.lastError().text());
    }
    else
    {

         //====Inventaire======================================================================================
         refreshListeArticle();
         //====================================================================================================

         QObject::connect(ui->annuler_pushButton,SIGNAL(clicked(bool)),this, SLOT(clearAll()));
         QObject::connect(ui->ajouter_pushButton,SIGNAL(clicked(bool)),this, SLOT(addArticles()));
         QObject::connect(ui->recherche_pushButton,SIGNAL(clicked(bool)),this,SLOT(researchArticle()));
         QObject::connect(ui->ajItem_pushButton,SIGNAL(clicked(bool)),this, SLOT(addArticleItemListe()));
         QObject::connect(ui->mod_pushButton,SIGNAL(clicked(bool)),this,SLOT(modificationAffichage()));
         QObject::connect(ui->modItem_pushButton,SIGNAL(clicked(bool)),this,SLOT(afficherOptionModi()));
         QObject::connect(ui->validerMod_pushButton,SIGNAL(clicked(bool)),this,SLOT(modifierItem()));
         QObject::connect(ui->supItem_pushButton,SIGNAL(clicked(bool)),this,SLOT(afficherOptionSupp()));
         QObject::connect(ui->suppValider_pushButton,SIGNAL(clicked(bool)),this,SLOT(supprimerItem()));
         QObject::connect(ui->suppItemFac_pushButton,SIGNAL(clicked(bool)),this,SLOT(supprimerItemFacture()));

         QSound::play("Ookay.wav");


         //=============ToolTip============================================================================
         ui->recherche_pushButton->setToolTip("Faire une recherche dans la base de donnée");
         ui->ajouter_pushButton->setToolTip("Ajouter un article à la base de données");
         ui->annuler_pushButton->setToolTip("Effacer toutes les entrées");
         ui->ajItem_pushButton->setToolTip("Ajouter un item à la liste");
         //================================================================================================
         hideWidget();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::clearAll()
{
    ui->nom_lineEdit->clear();
    ui->quantiteInventaire_spinBox->clear();
    ui->prix_lineEdit->clear();
    ui->rabais_lineEdit->clear();
   // ui->statusBar->showMessage("");

    ui->mod_pushButton->setVisible(true);
    hideWidget();
}

void MainWindow::addArticles()
{
    bool ok;

    QSqlQuery query;
    query.prepare("INSERT INTO `Articles` (`Nom`, `Quantité`, `Prix`, `Rabais`) "
    "VALUES ('" + ui->nom_lineEdit->text() + "', '" + ui->quantiteInventaire_spinBox->text() + "', '" + ui->prix_lineEdit->text() + "', '"+ui->rabais_lineEdit->text() +"')");
    ok = query.exec();
    if(ok)
    {
        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery(query);

        refreshListeArticle();
        ui->statusBar->showMessage("L'item " + ui->nom_lineEdit->text() + " à bien été ajouté " );
        clearAll();
    }
    else
    {
         ui->statusBar->showMessage("Erreur lors de l'ajout de l'item " + ui->nom_lineEdit->text());
    }
}

void MainWindow::refreshListeArticle()
{
    QSqlQuery query;
    query.exec("SELECT * FROM `articles`");
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);
    ui->inv_tableView->setModel(model);
}

void MainWindow::researchArticle()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM `articles` WHERE `Nom` LIKE '"+ ui->nom_lineEdit->text() +"'");
    bool ok = query.exec();
    if(!ok)
        QMessageBox::critical(this, "Erreur lors de la recherche", query.lastError().text());

    if(query.next() == true)
    {
        ui->prix_lineEdit->setText(query.value("Prix").toString());//Il faudrait des décimals
        ui->quantiteInventaire_spinBox->setDisplayIntegerBase(query.value("Quantité").toInt());
        ui->rabais_lineEdit->setText(query.value("Rabais").toString());
        ui->statusBar->showMessage("Recherche réussi");     
    }
    else
    {
        ui->statusBar->showMessage("Aucun article nommé " + ui->nom_lineEdit->text());
    }
}

void MainWindow::addArticleItemListe()
{

   /* QString analyse = ui->ajItem_lineEdit->text();
    bool isNotOk = false;

    for(int i = 0; i < analyse.size(); i++)
    {
        if(isalpha(analyse.toInt()));
          isNotOk = true;
    }*/

    if(ui->ajItem_lineEdit->text().isEmpty())//Ajouter une verification de nombre et lettre
    {
        ui->statusBar->showMessage("Vous avez besoin d'un ID avant de l'ajouter");
    }
    else
    {

        QString ID;
        QString Nom;
        QString Prix;
        QString Quantite;
        QString Rabais;


        QSqlQuery query;
        query.prepare("SELECT * FROM `articles` WHERE `ID` LIKE '"+ ui->ajItem_lineEdit->text() +"'");
        bool ok = query.exec();
        if(!ok)
        {
            QMessageBox::critical(this, "Erreur lors de la recherche", query.lastError().text());
        }

        query.first();
        ID = query.value("ID").toString();
        Nom = query.value("Nom").toString();
        Prix = query.value("Prix").toString();
        Rabais = query.value("Rabais").toString();
        Quantite = ui->quantiteFacture_spinBox->text();



        ui->litem_tabWidget->insertRow(ui->litem_tabWidget->rowCount());

        QTableWidgetItem *newID = new QTableWidgetItem(ID);
        QTableWidgetItem *newNom = new QTableWidgetItem(Nom);
        QTableWidgetItem *newPrix = new QTableWidgetItem(Prix);
        QTableWidgetItem *newQuantite = new QTableWidgetItem(Quantite);
        QTableWidgetItem *newRabais = new QTableWidgetItem(Rabais);


        ui->litem_tabWidget->setItem(ui->litem_tabWidget->rowCount()-1,0,newID);
        ui->litem_tabWidget->setItem(ui->litem_tabWidget->rowCount()-1,1,newQuantite);
        ui->litem_tabWidget->setItem(ui->litem_tabWidget->rowCount()-1,2,newNom);
        ui->litem_tabWidget->setItem(ui->litem_tabWidget->rowCount()-1,4,newPrix);
        ui->litem_tabWidget->setItem(ui->litem_tabWidget->rowCount()-1,3,newRabais);

        majFacture();

        ui->quantiteFacture_spinBox->clear();
        ui->ajItem_lineEdit->clear();
        ui->ajItem_lineEdit->setFocus();

        refreshListeArticle();
        ui->statusBar->showMessage("Item ajouté à la liste");
    }
}

void MainWindow::majFacture()
{
    float sousTotal = 0;
    for(int i =0; i < ui->litem_tabWidget->rowCount(); i++)
    {
        sousTotal += (ui->litem_tabWidget->item(i,4)->text().toFloat() * (1 - ui->litem_tabWidget->item(i,3)->text().toFloat())) * ui->litem_tabWidget->item(i, 1)->text().toFloat();
    }
    QString floatStringST = QString::number(sousTotal, 'f', 2);
    ui->sousTotal_lineEdit->setText(floatStringST);

    float tps = sousTotal * 0.05;
    QString tpsString = QString::number(tps, 'f', 2);
    ui->tps_lineEdit->setText(tpsString);

    float tvq = sousTotal * 0.09975;
    QString tvqString = QString::number(tvq, 'f', 2);
    ui->tvq_lineEdit->setText(tvqString);

    float total = sousTotal + tps + tvq;
    QString totalString = QString::number(total, 'f', 2);
    ui->total_lineEdit->setText(totalString);
}

void MainWindow::supprimerItemFacture()
{
    ui->litem_tabWidget->removeRow(ui->suppItemFac_lineEdit->text().toInt() - 1);//ICI to wtf
    majFacture();
}

void MainWindow::updateBDFacture()
{
   /* QString Quantite = ui->quanItem_lineEdit->text();

    QSqlQuery query1;
    query1.prepare("SELECT `Quantité` FROM `articles` WHERE `ID` =" + ui ->ajItem_lineEdit->text() + ";");
    query1.exec();
    query1.first();
    int stockTemp = query1.value("Quantité").toInt();
    stockTemp -= Quantite.toInt();

    QSqlQuery query2;
    query2.prepare("UPDATE `articles` SET `Quantité` = ? WHERE `articles`.`ID` = '" +ui->ajItem_lineEdit->text() +"';");
    query2.addBindValue(stockTemp);
    query2.exec();*/

}

void MainWindow::modifierItem()
{
    bool ok;

    QSqlQuery query;
    query.prepare("UPDATE `articles` SET `Nom` = '" + ui->newName_lineEdit->text() + "' WHERE `articles`.`ID` = '" + ui->newItemID_lineEdit->text() + "';");
    if(!ui->newName_lineEdit->text().isEmpty())
    {
        ok = query.exec();
        if(ok)
            {
                QSqlQueryModel *model = new QSqlQueryModel();
                model->setQuery(query);
            }
            else
            {
                 ui->statusBar->showMessage("Erreur lors de la modification de l'item");
            }
        ui->statusBar->showMessage("L'item à bien été modifier");
    }
    else
    {
        ui->statusBar->showMessage("Vous devez entrer un nouveau nom à l'item " + ui->newItemID_lineEdit->text());
    }
    refreshListeArticle();
    ui->newItemID_lineEdit->clear();
    ui->newName_lineEdit->clear();
}

void MainWindow::supprimerItem()
{
    bool ok;

    QSqlQuery query;
    query.prepare("DELETE from articles WHERE nom = '"+ ui->supp_lineEdit->text() +"'");
    if(!ui->supp_lineEdit->text().isEmpty())
    {
        ok = query.exec();
        if(ok)
        {
            QSqlQueryModel *model = new QSqlQueryModel();
            model->setQuery(query);
        }
        else
        {
             ui->statusBar->showMessage("Erreur lors de la suppresion de l'item");
        }

    refreshListeArticle();
    ui->statusBar->showMessage("L'item à bien été supprimer");
    ui->supp_lineEdit->clear();
    }
}

void MainWindow::modificationAffichage()
{
    bool click = true;
    ui->mod_pushButton->setVisible(false);
    ui->modItem_pushButton->setVisible(click);
    ui->supItem_pushButton->setVisible(click);
}

void MainWindow::afficherOptionModi()
{
    bool click = true;
    ui->newItemID_lineEdit->setVisible(click);
    ui->newName_lineEdit->setVisible(click);
    ui->newItemID_label->setVisible(click);
    ui->newName_label->setVisible(click);
    ui->validerMod_pushButton->setVisible(click);

    ui->supp_lineEdit->setVisible(false);
    ui->suppValider_pushButton->setVisible(false);
    ui->supp_label->setVisible(false);

}

void MainWindow::afficherOptionSupp()
{
    bool click = true;
    ui->supp_lineEdit->setVisible(click);
    ui->suppValider_pushButton->setVisible(click);
    ui->supp_label->setVisible(click);

    ui->newItemID_lineEdit->setVisible(false);
    ui->newName_lineEdit->setVisible(false);
    ui->newItemID_label->setVisible(false);
    ui->newName_label->setVisible(false);
    ui->validerMod_pushButton->setVisible(false);
}

void MainWindow::hideWidget()
{
    ui->modItem_pushButton->setVisible(false);
    ui->supItem_pushButton->setVisible(false);
    ui->newName_lineEdit->setVisible(false);
    ui->newItemID_lineEdit->setVisible(false);
    ui->newName_lineEdit->setVisible(false);
    ui->newItemID_label->setVisible(false);
    ui->newName_label->setVisible(false);
    ui->validerMod_pushButton->setVisible(false);
    ui->supp_label->setVisible(false);
    ui->supp_lineEdit->setVisible(false);
    ui->suppValider_pushButton->setVisible(false);
    ui->supp_lineEdit->setVisible(false);
    ui->suppValider_pushButton->setVisible(false);
    ui->supp_label->setVisible(false);
}
