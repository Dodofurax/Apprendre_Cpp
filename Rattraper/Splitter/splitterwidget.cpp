#include "splitterwidget.h"
#include "ui_splitterwidget.h"
#include <QString>
#include<QStringList>

SplitterWidget::SplitterWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SplitterWidget)
{
    ui->setupUi(this);
}

SplitterWidget::~SplitterWidget()
{
    delete ui;
}

void SplitterWidget::on_BoutonDecoder_clicked()
{
    QString texte = ui->lineEdit->text();
    QStringList liste = texte.split(";");
    ui->lineEdit_Nom->setText(liste.at(0));
    ui->lineEdit_Prenom->setText(liste.at(1));
    ui->lineEdit_Age->setText(liste.at(2));
    ui->lineEdit_Poids->setText(liste.at(3));
    ui->lineEdit_Taille->setText(liste.at(4));
}

