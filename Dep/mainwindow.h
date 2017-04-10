#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void clearAll();
    void addArticles();
    void refreshListeArticle();
    void researchArticle();
    void addArticleItemListe();
    void modificationAffichage();
    void afficherOptionModi();
    void afficherOptionSupp();
    void modifierItem();
    void supprimerItem();
    void hideWidget();
    void updateBDFacture();
    void supprimerItemFacture();
    void majFacture();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
