/********************************************************************************
** Form generated from reading UI file 'clavier.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLAVIER_H
#define UI_CLAVIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clavier
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxLedVerte;
    QCheckBox *checkBoxLedRouge;
    QGridLayout *gridLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButtonMarche;
    QPushButton *pushButton_0;
    QPushButton *pushButtonArret;

    void setupUi(QWidget *Clavier)
    {
        if (Clavier->objectName().isEmpty())
            Clavier->setObjectName("Clavier");
        Clavier->resize(287, 236);
        QFont font;
        font.setPointSize(15);
        Clavier->setFont(font);
        layoutWidget = new QWidget(Clavier);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 256, 183));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBoxLedVerte = new QCheckBox(layoutWidget);
        checkBoxLedVerte->setObjectName("checkBoxLedVerte");
        checkBoxLedVerte->setEnabled(false);

        horizontalLayout->addWidget(checkBoxLedVerte);

        checkBoxLedRouge = new QCheckBox(layoutWidget);
        checkBoxLedRouge->setObjectName("checkBoxLedRouge");
        checkBoxLedRouge->setEnabled(false);

        horizontalLayout->addWidget(checkBoxLedRouge);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setEnabled(true);

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setEnabled(true);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setEnabled(false);

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setEnabled(false);

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setEnabled(false);

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setEnabled(true);

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setEnabled(false);

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setEnabled(true);

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButtonMarche = new QPushButton(layoutWidget);
        pushButtonMarche->setObjectName("pushButtonMarche");
        pushButtonMarche->setEnabled(true);

        gridLayout->addWidget(pushButtonMarche, 3, 0, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setEnabled(false);

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1);

        pushButtonArret = new QPushButton(layoutWidget);
        pushButtonArret->setObjectName("pushButtonArret");
        pushButtonArret->setEnabled(true);

        gridLayout->addWidget(pushButtonArret, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Clavier);

        QMetaObject::connectSlotsByName(Clavier);
    } // setupUi

    void retranslateUi(QWidget *Clavier)
    {
        Clavier->setWindowTitle(QCoreApplication::translate("Clavier", "Centrale d'alarme", nullptr));
        checkBoxLedVerte->setText(QCoreApplication::translate("Clavier", "Led Verte", nullptr));
        checkBoxLedRouge->setText(QCoreApplication::translate("Clavier", "LedRouge", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Clavier", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Clavier", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Clavier", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Clavier", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Clavier", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Clavier", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Clavier", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Clavier", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Clavier", "9", nullptr));
        pushButtonMarche->setText(QCoreApplication::translate("Clavier", "Marche", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Clavier", "0", nullptr));
        pushButtonArret->setText(QCoreApplication::translate("Clavier", "Arret", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clavier: public Ui_Clavier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLAVIER_H
