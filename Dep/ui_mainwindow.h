/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *InvMod_tabWidget;
    QWidget *tab;
    QTableView *inv_tableView;
    QWidget *tab_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *prix_label;
    QLabel *rabais_label;
    QLineEdit *prix_lineEdit;
    QLabel *nom_label;
    QLabel *quantite_label;
    QLineEdit *nom_lineEdit;
    QLineEdit *rabais_lineEdit;
    QSpinBox *quantiteInventaire_spinBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *optionMod_horizontalLayout;
    QPushButton *ajouter_pushButton;
    QPushButton *recherche_pushButton;
    QPushButton *annuler_pushButton;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *mod_pushButton;
    QPushButton *modItem_pushButton;
    QPushButton *supItem_pushButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *Mod_gridLayout;
    QLineEdit *newItemID_lineEdit;
    QLabel *newItemID_label;
    QLineEdit *newName_lineEdit;
    QPushButton *validerMod_pushButton;
    QLabel *newName_label;
    QWidget *gridLayoutWidget_3;
    QGridLayout *supp_gridLayout;
    QLabel *supp_label;
    QLineEdit *supp_lineEdit;
    QPushButton *suppValider_pushButton;
    QFrame *facture_frame;
    QTableWidget *litem_tabWidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *ajItemListe_horizontalLayout;
    QPushButton *ajItem_pushButton;
    QLabel *ajouterID_label;
    QLineEdit *ajItem_lineEdit;
    QLabel *quantiteItem_label;
    QSpinBox *quantiteFacture_spinBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *taxTotal_lineEdit_verticalLayout;
    QLineEdit *sousTotal_lineEdit;
    QLineEdit *tps_lineEdit;
    QLineEdit *tvq_lineEdit;
    QLineEdit *total_lineEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *taxTotal_label_verticalLayout;
    QLabel *sousTotal_label;
    QLabel *tps_label;
    QLabel *tvq_label;
    QLabel *total_label;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Annuler_pushButton;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *suppItemFac_horizontalLayout;
    QPushButton *suppItemFac_pushButton;
    QLineEdit *suppItemFac_lineEdit;
    QLabel *logo_label;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *info_horizontalLayout;
    QLabel *ville_label;
    QLabel *adresse_label;
    QLabel *numTel_label;
    QLabel *proprio_label;
    QLabel *alpha_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1287, 765);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        InvMod_tabWidget = new QTabWidget(centralWidget);
        InvMod_tabWidget->setObjectName(QStringLiteral("InvMod_tabWidget"));
        InvMod_tabWidget->setGeometry(QRect(660, 140, 591, 531));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        inv_tableView = new QTableView(tab);
        inv_tableView->setObjectName(QStringLiteral("inv_tableView"));
        inv_tableView->setGeometry(QRect(20, 10, 551, 461));
        InvMod_tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayoutWidget = new QWidget(tab_2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 50, 501, 161));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        prix_label = new QLabel(gridLayoutWidget);
        prix_label->setObjectName(QStringLiteral("prix_label"));

        gridLayout->addWidget(prix_label, 2, 0, 1, 1);

        rabais_label = new QLabel(gridLayoutWidget);
        rabais_label->setObjectName(QStringLiteral("rabais_label"));

        gridLayout->addWidget(rabais_label, 3, 0, 1, 1);

        prix_lineEdit = new QLineEdit(gridLayoutWidget);
        prix_lineEdit->setObjectName(QStringLiteral("prix_lineEdit"));

        gridLayout->addWidget(prix_lineEdit, 2, 3, 1, 1);

        nom_label = new QLabel(gridLayoutWidget);
        nom_label->setObjectName(QStringLiteral("nom_label"));

        gridLayout->addWidget(nom_label, 0, 0, 1, 1);

        quantite_label = new QLabel(gridLayoutWidget);
        quantite_label->setObjectName(QStringLiteral("quantite_label"));

        gridLayout->addWidget(quantite_label, 1, 0, 1, 1);

        nom_lineEdit = new QLineEdit(gridLayoutWidget);
        nom_lineEdit->setObjectName(QStringLiteral("nom_lineEdit"));

        gridLayout->addWidget(nom_lineEdit, 0, 3, 1, 1);

        rabais_lineEdit = new QLineEdit(gridLayoutWidget);
        rabais_lineEdit->setObjectName(QStringLiteral("rabais_lineEdit"));

        gridLayout->addWidget(rabais_lineEdit, 3, 3, 1, 1);

        quantiteInventaire_spinBox = new QSpinBox(gridLayoutWidget);
        quantiteInventaire_spinBox->setObjectName(QStringLiteral("quantiteInventaire_spinBox"));

        gridLayout->addWidget(quantiteInventaire_spinBox, 1, 3, 1, 1);

        horizontalLayoutWidget = new QWidget(tab_2);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 230, 501, 41));
        optionMod_horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        optionMod_horizontalLayout->setSpacing(6);
        optionMod_horizontalLayout->setContentsMargins(11, 11, 11, 11);
        optionMod_horizontalLayout->setObjectName(QStringLiteral("optionMod_horizontalLayout"));
        optionMod_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ajouter_pushButton = new QPushButton(horizontalLayoutWidget);
        ajouter_pushButton->setObjectName(QStringLiteral("ajouter_pushButton"));

        optionMod_horizontalLayout->addWidget(ajouter_pushButton);

        recherche_pushButton = new QPushButton(horizontalLayoutWidget);
        recherche_pushButton->setObjectName(QStringLiteral("recherche_pushButton"));

        optionMod_horizontalLayout->addWidget(recherche_pushButton);

        annuler_pushButton = new QPushButton(horizontalLayoutWidget);
        annuler_pushButton->setObjectName(QStringLiteral("annuler_pushButton"));

        optionMod_horizontalLayout->addWidget(annuler_pushButton);

        horizontalLayoutWidget_4 = new QWidget(tab_2);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(40, 280, 501, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mod_pushButton = new QPushButton(horizontalLayoutWidget_4);
        mod_pushButton->setObjectName(QStringLiteral("mod_pushButton"));

        horizontalLayout->addWidget(mod_pushButton);

        modItem_pushButton = new QPushButton(horizontalLayoutWidget_4);
        modItem_pushButton->setObjectName(QStringLiteral("modItem_pushButton"));

        horizontalLayout->addWidget(modItem_pushButton);

        supItem_pushButton = new QPushButton(horizontalLayoutWidget_4);
        supItem_pushButton->setObjectName(QStringLiteral("supItem_pushButton"));

        horizontalLayout->addWidget(supItem_pushButton);

        gridLayoutWidget_2 = new QWidget(tab_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(40, 340, 251, 80));
        Mod_gridLayout = new QGridLayout(gridLayoutWidget_2);
        Mod_gridLayout->setSpacing(6);
        Mod_gridLayout->setContentsMargins(11, 11, 11, 11);
        Mod_gridLayout->setObjectName(QStringLiteral("Mod_gridLayout"));
        Mod_gridLayout->setContentsMargins(0, 0, 0, 0);
        newItemID_lineEdit = new QLineEdit(gridLayoutWidget_2);
        newItemID_lineEdit->setObjectName(QStringLiteral("newItemID_lineEdit"));

        Mod_gridLayout->addWidget(newItemID_lineEdit, 0, 1, 1, 1);

        newItemID_label = new QLabel(gridLayoutWidget_2);
        newItemID_label->setObjectName(QStringLiteral("newItemID_label"));

        Mod_gridLayout->addWidget(newItemID_label, 0, 0, 1, 1);

        newName_lineEdit = new QLineEdit(gridLayoutWidget_2);
        newName_lineEdit->setObjectName(QStringLiteral("newName_lineEdit"));

        Mod_gridLayout->addWidget(newName_lineEdit, 1, 1, 1, 1);

        validerMod_pushButton = new QPushButton(gridLayoutWidget_2);
        validerMod_pushButton->setObjectName(QStringLiteral("validerMod_pushButton"));

        Mod_gridLayout->addWidget(validerMod_pushButton, 2, 1, 1, 1);

        newName_label = new QLabel(gridLayoutWidget_2);
        newName_label->setObjectName(QStringLiteral("newName_label"));

        Mod_gridLayout->addWidget(newName_label, 1, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(tab_2);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(310, 340, 231, 51));
        supp_gridLayout = new QGridLayout(gridLayoutWidget_3);
        supp_gridLayout->setSpacing(6);
        supp_gridLayout->setContentsMargins(11, 11, 11, 11);
        supp_gridLayout->setObjectName(QStringLiteral("supp_gridLayout"));
        supp_gridLayout->setContentsMargins(0, 0, 0, 0);
        supp_label = new QLabel(gridLayoutWidget_3);
        supp_label->setObjectName(QStringLiteral("supp_label"));

        supp_gridLayout->addWidget(supp_label, 0, 1, 1, 1);

        supp_lineEdit = new QLineEdit(gridLayoutWidget_3);
        supp_lineEdit->setObjectName(QStringLiteral("supp_lineEdit"));

        supp_gridLayout->addWidget(supp_lineEdit, 0, 2, 1, 1);

        suppValider_pushButton = new QPushButton(gridLayoutWidget_3);
        suppValider_pushButton->setObjectName(QStringLiteral("suppValider_pushButton"));

        supp_gridLayout->addWidget(suppValider_pushButton, 1, 2, 1, 1);

        InvMod_tabWidget->addTab(tab_2, QString());
        facture_frame = new QFrame(centralWidget);
        facture_frame->setObjectName(QStringLiteral("facture_frame"));
        facture_frame->setGeometry(QRect(30, 140, 591, 531));
        facture_frame->setFrameShape(QFrame::StyledPanel);
        facture_frame->setFrameShadow(QFrame::Raised);
        litem_tabWidget = new QTableWidget(facture_frame);
        if (litem_tabWidget->columnCount() < 5)
            litem_tabWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        litem_tabWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        litem_tabWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        litem_tabWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        litem_tabWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        litem_tabWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        litem_tabWidget->setObjectName(QStringLiteral("litem_tabWidget"));
        litem_tabWidget->setGeometry(QRect(10, 20, 571, 351));
        horizontalLayoutWidget_2 = new QWidget(facture_frame);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 380, 290, 31));
        ajItemListe_horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        ajItemListe_horizontalLayout->setSpacing(6);
        ajItemListe_horizontalLayout->setContentsMargins(11, 11, 11, 11);
        ajItemListe_horizontalLayout->setObjectName(QStringLiteral("ajItemListe_horizontalLayout"));
        ajItemListe_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ajItem_pushButton = new QPushButton(horizontalLayoutWidget_2);
        ajItem_pushButton->setObjectName(QStringLiteral("ajItem_pushButton"));

        ajItemListe_horizontalLayout->addWidget(ajItem_pushButton);

        ajouterID_label = new QLabel(horizontalLayoutWidget_2);
        ajouterID_label->setObjectName(QStringLiteral("ajouterID_label"));

        ajItemListe_horizontalLayout->addWidget(ajouterID_label);

        ajItem_lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        ajItem_lineEdit->setObjectName(QStringLiteral("ajItem_lineEdit"));

        ajItemListe_horizontalLayout->addWidget(ajItem_lineEdit);

        quantiteItem_label = new QLabel(horizontalLayoutWidget_2);
        quantiteItem_label->setObjectName(QStringLiteral("quantiteItem_label"));

        ajItemListe_horizontalLayout->addWidget(quantiteItem_label);

        quantiteFacture_spinBox = new QSpinBox(horizontalLayoutWidget_2);
        quantiteFacture_spinBox->setObjectName(QStringLiteral("quantiteFacture_spinBox"));

        ajItemListe_horizontalLayout->addWidget(quantiteFacture_spinBox);

        verticalLayoutWidget = new QWidget(facture_frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(470, 380, 81, 100));
        taxTotal_lineEdit_verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        taxTotal_lineEdit_verticalLayout->setSpacing(6);
        taxTotal_lineEdit_verticalLayout->setContentsMargins(11, 11, 11, 11);
        taxTotal_lineEdit_verticalLayout->setObjectName(QStringLiteral("taxTotal_lineEdit_verticalLayout"));
        taxTotal_lineEdit_verticalLayout->setContentsMargins(0, 0, 0, 0);
        sousTotal_lineEdit = new QLineEdit(verticalLayoutWidget);
        sousTotal_lineEdit->setObjectName(QStringLiteral("sousTotal_lineEdit"));
        sousTotal_lineEdit->setEnabled(false);

        taxTotal_lineEdit_verticalLayout->addWidget(sousTotal_lineEdit);

        tps_lineEdit = new QLineEdit(verticalLayoutWidget);
        tps_lineEdit->setObjectName(QStringLiteral("tps_lineEdit"));
        tps_lineEdit->setEnabled(false);

        taxTotal_lineEdit_verticalLayout->addWidget(tps_lineEdit);

        tvq_lineEdit = new QLineEdit(verticalLayoutWidget);
        tvq_lineEdit->setObjectName(QStringLiteral("tvq_lineEdit"));
        tvq_lineEdit->setEnabled(false);

        taxTotal_lineEdit_verticalLayout->addWidget(tvq_lineEdit);

        total_lineEdit = new QLineEdit(verticalLayoutWidget);
        total_lineEdit->setObjectName(QStringLiteral("total_lineEdit"));
        total_lineEdit->setEnabled(false);

        taxTotal_lineEdit_verticalLayout->addWidget(total_lineEdit);

        verticalLayoutWidget_2 = new QWidget(facture_frame);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(410, 380, 51, 101));
        taxTotal_label_verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        taxTotal_label_verticalLayout->setSpacing(6);
        taxTotal_label_verticalLayout->setContentsMargins(11, 11, 11, 11);
        taxTotal_label_verticalLayout->setObjectName(QStringLiteral("taxTotal_label_verticalLayout"));
        taxTotal_label_verticalLayout->setContentsMargins(0, 0, 0, 0);
        sousTotal_label = new QLabel(verticalLayoutWidget_2);
        sousTotal_label->setObjectName(QStringLiteral("sousTotal_label"));

        taxTotal_label_verticalLayout->addWidget(sousTotal_label);

        tps_label = new QLabel(verticalLayoutWidget_2);
        tps_label->setObjectName(QStringLiteral("tps_label"));

        taxTotal_label_verticalLayout->addWidget(tps_label);

        tvq_label = new QLabel(verticalLayoutWidget_2);
        tvq_label->setObjectName(QStringLiteral("tvq_label"));

        taxTotal_label_verticalLayout->addWidget(tvq_label);

        total_label = new QLabel(verticalLayoutWidget_2);
        total_label->setObjectName(QStringLiteral("total_label"));

        taxTotal_label_verticalLayout->addWidget(total_label);

        horizontalLayoutWidget_5 = new QWidget(facture_frame);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(9, 480, 271, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Annuler_pushButton = new QPushButton(horizontalLayoutWidget_5);
        Annuler_pushButton->setObjectName(QStringLiteral("Annuler_pushButton"));
        Annuler_pushButton->setToolTipDuration(-5);

        horizontalLayout_2->addWidget(Annuler_pushButton);

        horizontalLayoutWidget_6 = new QWidget(facture_frame);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 430, 271, 31));
        suppItemFac_horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_6);
        suppItemFac_horizontalLayout->setSpacing(6);
        suppItemFac_horizontalLayout->setContentsMargins(11, 11, 11, 11);
        suppItemFac_horizontalLayout->setObjectName(QStringLiteral("suppItemFac_horizontalLayout"));
        suppItemFac_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        suppItemFac_pushButton = new QPushButton(horizontalLayoutWidget_6);
        suppItemFac_pushButton->setObjectName(QStringLiteral("suppItemFac_pushButton"));

        suppItemFac_horizontalLayout->addWidget(suppItemFac_pushButton);

        suppItemFac_lineEdit = new QLineEdit(horizontalLayoutWidget_6);
        suppItemFac_lineEdit->setObjectName(QStringLiteral("suppItemFac_lineEdit"));

        suppItemFac_horizontalLayout->addWidget(suppItemFac_lineEdit);

        logo_label = new QLabel(centralWidget);
        logo_label->setObjectName(QStringLiteral("logo_label"));
        logo_label->setGeometry(QRect(210, 20, 961, 71));
        logo_label->setTextFormat(Qt::PlainText);
        logo_label->setPixmap(QPixmap(QString::fromUtf8("../Logo/Banni\303\250re.png")));
        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(350, 680, 751, 20));
        info_horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        info_horizontalLayout->setSpacing(10);
        info_horizontalLayout->setContentsMargins(11, 11, 11, 11);
        info_horizontalLayout->setObjectName(QStringLiteral("info_horizontalLayout"));
        info_horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        info_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ville_label = new QLabel(horizontalLayoutWidget_3);
        ville_label->setObjectName(QStringLiteral("ville_label"));

        info_horizontalLayout->addWidget(ville_label);

        adresse_label = new QLabel(horizontalLayoutWidget_3);
        adresse_label->setObjectName(QStringLiteral("adresse_label"));

        info_horizontalLayout->addWidget(adresse_label);

        numTel_label = new QLabel(horizontalLayoutWidget_3);
        numTel_label->setObjectName(QStringLiteral("numTel_label"));

        info_horizontalLayout->addWidget(numTel_label);

        proprio_label = new QLabel(horizontalLayoutWidget_3);
        proprio_label->setObjectName(QStringLiteral("proprio_label"));

        info_horizontalLayout->addWidget(proprio_label);

        alpha_label = new QLabel(centralWidget);
        alpha_label->setObjectName(QStringLiteral("alpha_label"));
        alpha_label->setGeometry(QRect(1240, 10, 47, 13));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1287, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(nom_lineEdit, prix_lineEdit);
        QWidget::setTabOrder(prix_lineEdit, rabais_lineEdit);
        QWidget::setTabOrder(rabais_lineEdit, ajouter_pushButton);
        QWidget::setTabOrder(ajouter_pushButton, recherche_pushButton);
        QWidget::setTabOrder(recherche_pushButton, annuler_pushButton);
        QWidget::setTabOrder(annuler_pushButton, mod_pushButton);
        QWidget::setTabOrder(mod_pushButton, modItem_pushButton);
        QWidget::setTabOrder(modItem_pushButton, supItem_pushButton);
        QWidget::setTabOrder(supItem_pushButton, newItemID_lineEdit);
        QWidget::setTabOrder(newItemID_lineEdit, newName_lineEdit);
        QWidget::setTabOrder(newName_lineEdit, validerMod_pushButton);
        QWidget::setTabOrder(validerMod_pushButton, supp_lineEdit);
        QWidget::setTabOrder(supp_lineEdit, suppValider_pushButton);
        QWidget::setTabOrder(suppValider_pushButton, InvMod_tabWidget);
        QWidget::setTabOrder(InvMod_tabWidget, litem_tabWidget);
        QWidget::setTabOrder(litem_tabWidget, ajItem_lineEdit);
        QWidget::setTabOrder(ajItem_lineEdit, ajItem_pushButton);
        QWidget::setTabOrder(ajItem_pushButton, sousTotal_lineEdit);
        QWidget::setTabOrder(sousTotal_lineEdit, tps_lineEdit);
        QWidget::setTabOrder(tps_lineEdit, tvq_lineEdit);
        QWidget::setTabOrder(tvq_lineEdit, total_lineEdit);
        QWidget::setTabOrder(total_lineEdit, Annuler_pushButton);
        QWidget::setTabOrder(Annuler_pushButton, inv_tableView);

        retranslateUi(MainWindow);
        QObject::connect(Annuler_pushButton, SIGNAL(clicked()), litem_tabWidget, SLOT(clear()));
        QObject::connect(Annuler_pushButton, SIGNAL(clicked()), sousTotal_lineEdit, SLOT(clear()));
        QObject::connect(Annuler_pushButton, SIGNAL(clicked()), tps_lineEdit, SLOT(clear()));
        QObject::connect(Annuler_pushButton, SIGNAL(clicked()), tvq_lineEdit, SLOT(clear()));
        QObject::connect(Annuler_pushButton, SIGNAL(clicked()), total_lineEdit, SLOT(clear()));
        QObject::connect(Annuler_pushButton, SIGNAL(clicked()), suppItemFac_lineEdit, SLOT(clear()));

        InvMod_tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        InvMod_tabWidget->setTabText(InvMod_tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Inventaire", Q_NULLPTR));
        prix_label->setText(QApplication::translate("MainWindow", "Prix", Q_NULLPTR));
        rabais_label->setText(QApplication::translate("MainWindow", "Rabais", Q_NULLPTR));
        nom_label->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        quantite_label->setText(QApplication::translate("MainWindow", "Quantit\303\251", Q_NULLPTR));
        ajouter_pushButton->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        ajouter_pushButton->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", Q_NULLPTR));
        recherche_pushButton->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        recherche_pushButton->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
        annuler_pushButton->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        mod_pushButton->setText(QApplication::translate("MainWindow", "Modification", Q_NULLPTR));
        modItem_pushButton->setText(QApplication::translate("MainWindow", "Modifier un item", Q_NULLPTR));
        supItem_pushButton->setText(QApplication::translate("MainWindow", "Supprimer un item", Q_NULLPTR));
        newItemID_label->setText(QApplication::translate("MainWindow", "ID du produit", Q_NULLPTR));
        validerMod_pushButton->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        newName_label->setText(QApplication::translate("MainWindow", "Nouveau nom", Q_NULLPTR));
        supp_label->setText(QApplication::translate("MainWindow", "Nom item", Q_NULLPTR));
        suppValider_pushButton->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        InvMod_tabWidget->setTabText(InvMod_tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Modification", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = litem_tabWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = litem_tabWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Quantit\303\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = litem_tabWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = litem_tabWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Rabais", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = litem_tabWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Prix", Q_NULLPTR));
        ajItem_pushButton->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        ajItem_pushButton->setShortcut(QApplication::translate("MainWindow", "Enter, Return", Q_NULLPTR));
        ajouterID_label->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        quantiteItem_label->setText(QApplication::translate("MainWindow", "Quantit\303\251", Q_NULLPTR));
        sousTotal_label->setText(QApplication::translate("MainWindow", "Sous-total", Q_NULLPTR));
        tps_label->setText(QApplication::translate("MainWindow", "Tps :", Q_NULLPTR));
        tvq_label->setText(QApplication::translate("MainWindow", "Tvq :", Q_NULLPTR));
        total_label->setText(QApplication::translate("MainWindow", "Total :", Q_NULLPTR));
        Annuler_pushButton->setText(QApplication::translate("MainWindow", "Annuler la facture", Q_NULLPTR));
        Annuler_pushButton->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
        suppItemFac_pushButton->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        logo_label->setText(QString());
        ville_label->setText(QApplication::translate("MainWindow", "Springfield", Q_NULLPTR));
        adresse_label->setText(QApplication::translate("MainWindow", "60210", Q_NULLPTR));
        numTel_label->setText(QApplication::translate("MainWindow", "+1 212-759-6600", Q_NULLPTR));
        proprio_label->setText(QApplication::translate("MainWindow", "Apu Nahasapeemapetilon", Q_NULLPTR));
        alpha_label->setText(QApplication::translate("MainWindow", "Alpha 1.1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
