#include "clavier.h"
#include "ui_clavier.h"

Clavier::Clavier(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Clavier)
{
    ui->setupUi(this);
/*
    connect(ui->pushButton_0,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_7,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_9,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
*/
    connect(&timerLed,&QTimer::timeout,this,&Clavier::onTimerLed_timeout);

}

Clavier::~Clavier()
{
    delete ui;
}

void Clavier::on_pushButtonMarche_clicked()
{
    QString texteBouton = ui->pushButtonMarche->text();
    QMessageBox messageMarche;
    messageMarche.setText("j'ai appuyé sur la touche " + texteBouton);
    messageMarche.exec();
    ui->checkBoxLedRouge->setCheckState(Qt::Checked);
    timerLed.start(500);
}

void Clavier::TraiterChiffre()
{
    QPushButton *pbouton = static_cast<QPushButton *>(sender());
    QString texteBouton = pbouton->text();
    QMessageBox messageChiffre;
    messageChiffre.setText("j'ai appuyé sur la touche " + texteBouton);
    messageChiffre.exec();
}

void Clavier::on_pushButtonArret_clicked()
{
    ui->checkBoxLedRouge->setCheckState(Qt::Unchecked);
    timerLed.stop();
}

void Clavier::onTimerLed_timeout()
{
    if(ui->checkBoxLedRouge->checkState() == Qt::Checked)
        ui->checkBoxLedRouge->setCheckState(Qt::Unchecked);
    else
        ui->checkBoxLedRouge->setCheckState(Qt::Checked);
}




void Clavier::on_pushButton_2_clicked()
{
    leDetecteur = new Detecteur;
    leDetecteur->show();
    /*    exec();
utilisateur ne peut pas interagir avec d'autres parties de l'interface tant que la boîte de dialogue Detecteur
 n'est pas fermée.
Le programme attend que la boîte soit fermée avant de continuer son exécution.

    show();
L'utilisateur peut continuer à interagir avec les autres fenêtres même si la boîte Detecteur est ouverte.
Le programme continue son exécution immédiatement après l'appel à show(), sans attendre que la boîte soit fermée.
*/
}


void Clavier::on_pushButton_3_clicked()
{
    leDetecteur->hide();
    delete leDetecteur;
    // si on appuie en premier il enlève le clavier.
}

