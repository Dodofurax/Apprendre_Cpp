#include "testtapis.h"
#include "ui_testtapis.h"


TestTapis::TestTapis(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::TestTapis),
    tapisA(this), tapisB(this), tapisC(this) {
    ui->setupUi(this);
}

TestTapis::~TestTapis() {
    delete ui;
}

void TestTapis::on_pushButtonSortir_clicked() {
    QString reference = ui->lineEditReference->text().toUpper();
    int diametre = ui->lineEditDiametre->text().toInt();

    if (reference.isEmpty() || diametre <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer une référence et un diamètre valides.");
        return;
    }

    Rouleaux* rouleaux = new Rouleaux(reference, diametre);

    char firstLetter = reference[0].toLatin1();
    if (firstLetter == 'A') {
        tapisA.AjouterRouleaux(rouleaux);
        MettreAjourAffichageTapis(tapisA, ui->listWidgetTapisA, ui->lcdNumberA);
    } else if (firstLetter == 'B') {
        tapisB.AjouterRouleaux(rouleaux);
        MettreAjourAffichageTapis(tapisB, ui->listWidgetTapisB, ui->lcdNumberB);
    } else if (firstLetter == 'C') {
        tapisC.AjouterRouleaux(rouleaux);
        MettreAjourAffichageTapis(tapisC, ui->listWidgetTapisC, ui->lcdNumberC);
    } else {
        QMessageBox::warning(this, "Erreur", "La référence doit commencer par 'A', 'B' ou 'C'.");
        delete rouleaux;
    }
}

void TestTapis::MettreAjourAffichageTapis(Tapis& tapis, QListWidget* listWidget, QLCDNumber* lcd) {
    lcd->display(tapis.getCompteur());
    listWidget->clear();
    listWidget->addItems(tapis.ObtenirContenuTapis());
}

void TestTapis::on_pushButtonRazA_clicked() {
    tapisA.InitialiserCompteur();
    MettreAjourAffichageTapis(tapisA, ui->listWidgetTapisA, ui->lcdNumberA);
}

void TestTapis::on_pushButtonRazB_clicked() {
    tapisB.InitialiserCompteur();
    MettreAjourAffichageTapis(tapisB, ui->listWidgetTapisB, ui->lcdNumberB);
}

void TestTapis::on_pushButtonRazC_clicked() {
    tapisC.InitialiserCompteur();
    MettreAjourAffichageTapis(tapisC, ui->listWidgetTapisC, ui->lcdNumberC);
}

void TestTapis::on_pushButtonSortirA_clicked() {
    handleSortirRouleaux(tapisA, ui->listWidgetTapisA, ui->lcdNumberA);
}

void TestTapis::on_pushButtonSortirB_clicked() {
    handleSortirRouleaux(tapisB, ui->listWidgetTapisB, ui->lcdNumberB);
}

void TestTapis::on_pushButtonSortirC_clicked() {
    handleSortirRouleaux(tapisC, ui->listWidgetTapisC, ui->lcdNumberC);
}

void TestTapis::handleSortirRouleaux(Tapis& tapis, QListWidget* listWidget, QLCDNumber* lcd) {
    Rouleaux* rouleaux = tapis.RetirerRouleaux();
    if (rouleaux) {
        QMessageBox::information(this, "Sortir Rouleaux",
                                 QString("Rouleaux sorti : Réf : %1 - Diamètre : %2")
                                     .arg(rouleaux->getReference())
                                     .arg(rouleaux->getDiametre()));
        MettreAjourAffichageTapis(tapis, listWidget, lcd);
        delete rouleaux;
    } else {
        QMessageBox::warning(this, "Avertissement", "Il n'y a plus de rouleaux à sortir.");
    }
}
