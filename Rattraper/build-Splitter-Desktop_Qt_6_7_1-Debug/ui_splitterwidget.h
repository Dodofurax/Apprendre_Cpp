/********************************************************************************
** Form generated from reading UI file 'splitterwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLITTERWIDGET_H
#define UI_SPLITTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SplitterWidget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *BoutonDecoder;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEdit_Nom;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_Prenom;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_Age;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_Poids;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Taille;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SplitterWidget)
    {
        if (SplitterWidget->objectName().isEmpty())
            SplitterWidget->setObjectName("SplitterWidget");
        SplitterWidget->resize(800, 600);
        widget = new QWidget(SplitterWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 60, 561, 441));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        BoutonDecoder = new QPushButton(widget);
        BoutonDecoder->setObjectName("BoutonDecoder");

        horizontalLayout->addWidget(BoutonDecoder);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(false);
        label_2->setFont(font1);

        horizontalLayout_6->addWidget(label_2);

        lineEdit_Nom = new QLineEdit(widget);
        lineEdit_Nom->setObjectName("lineEdit_Nom");

        horizontalLayout_6->addWidget(lineEdit_Nom);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        horizontalLayout_5->addWidget(label_6);

        lineEdit_Prenom = new QLineEdit(widget);
        lineEdit_Prenom->setObjectName("lineEdit_Prenom");

        horizontalLayout_5->addWidget(lineEdit_Prenom);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        horizontalLayout_4->addWidget(label_5);

        lineEdit_Age = new QLineEdit(widget);
        lineEdit_Age->setObjectName("lineEdit_Age");

        horizontalLayout_4->addWidget(lineEdit_Age);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        lineEdit_Poids = new QLineEdit(widget);
        lineEdit_Poids->setObjectName("lineEdit_Poids");

        horizontalLayout_3->addWidget(lineEdit_Poids);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        lineEdit_Taille = new QLineEdit(widget);
        lineEdit_Taille->setObjectName("lineEdit_Taille");

        horizontalLayout_2->addWidget(lineEdit_Taille);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(false);
        pushButton_2->setFont(font2);

        verticalLayout_2->addWidget(pushButton_2);


        retranslateUi(SplitterWidget);
        QObject::connect(pushButton_2, &QPushButton::clicked, SplitterWidget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(SplitterWidget);
    } // setupUi

    void retranslateUi(QWidget *SplitterWidget)
    {
        SplitterWidget->setWindowTitle(QCoreApplication::translate("SplitterWidget", "SplitterWidget", nullptr));
        label->setText(QCoreApplication::translate("SplitterWidget", "Text a decoder:", nullptr));
        BoutonDecoder->setText(QCoreApplication::translate("SplitterWidget", "Decoder", nullptr));
        label_2->setText(QCoreApplication::translate("SplitterWidget", "Nom", nullptr));
        label_6->setText(QCoreApplication::translate("SplitterWidget", "Pr\303\251nom", nullptr));
        label_5->setText(QCoreApplication::translate("SplitterWidget", "Age", nullptr));
        label_4->setText(QCoreApplication::translate("SplitterWidget", "Poids", nullptr));
        label_3->setText(QCoreApplication::translate("SplitterWidget", "Taille", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SplitterWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SplitterWidget: public Ui_SplitterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLITTERWIDGET_H
