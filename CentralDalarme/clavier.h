#ifndef CLAVIER_H
#define CLAVIER_H

#include <QTimer>
#include <QWidget>
#include <QMessageBox>
#include "detecteur.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Clavier;
}
QT_END_NAMESPACE

class Clavier : public QWidget
{
    Q_OBJECT

public:
    Clavier(QWidget *parent = nullptr);
    ~Clavier();

private slots:
    void on_pushButtonMarche_clicked();
    void TraiterChiffre();

    void on_pushButtonArret_clicked();
    void onTimerLed_timeout();



    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Clavier *ui;
    QTimer timerLed;
    Detecteur *leDetecteur;
};
#endif // CLAVIER_H
