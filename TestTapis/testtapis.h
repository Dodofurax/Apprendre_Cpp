#ifndef TESTTAPIS_H
#define TESTTAPIS_H

#include <QMainWindow>
#include <QWidget>
#include <QListWidget>
#include <QLCDNumber>
#include <QMessageBox>
#include "tapis.h"
#include "rouleaux.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class TestTapis;
}
QT_END_NAMESPACE

class TestTapis : public QMainWindow {
    Q_OBJECT

public:
    explicit TestTapis(QWidget *parent = nullptr);
    ~TestTapis();

private slots:
    void on_pushButtonSortir_clicked();
    void on_pushButtonRazA_clicked();
    void on_pushButtonRazB_clicked();
    void on_pushButtonRazC_clicked();
    void on_pushButtonSortirA_clicked();
    void on_pushButtonSortirB_clicked();
    void on_pushButtonSortirC_clicked();

private:
    Ui::TestTapis *ui;
    Tapis tapisA;
    Tapis tapisB;
    Tapis tapisC;

    void MettreAjourAffichageTapis(Tapis& tapis, QListWidget* listWidget, QLCDNumber* lcd);
    void handleSortirRouleaux(Tapis& tapis, QListWidget* listWidget, QLCDNumber* lcd);
};
#endif // TESTTAPIS_H
