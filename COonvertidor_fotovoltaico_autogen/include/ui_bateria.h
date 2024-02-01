/********************************************************************************
** Form generated from reading UI file 'bateria.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATERIA_H
#define UI_BATERIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bateria
{
public:
    QLineEdit *dato11;
    QLineEdit *resultado10;
    QLabel *label_14;
    QLabel *label_10;
    QLabel *label_16;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton;
    QLineEdit *Dato;
    QLabel *label_2;
    QLabel *label_5;
    QPushButton *atras;
    QLabel *label_7;
    QLabel *label_4;
    QLineEdit *dato3;
    QLineEdit *resultado11;
    QLabel *label_15;
    QLabel *label_13;

    void setupUi(QWidget *Bateria)
    {
        if (Bateria->objectName().isEmpty())
            Bateria->setObjectName("Bateria");
        Bateria->resize(591, 458);
        Bateria->setStyleSheet(QString::fromUtf8("background-color: #030637;\n"
"color: rgb(255, 255, 255);"));
        dato11 = new QLineEdit(Bateria);
        dato11->setObjectName("dato11");
        dato11->setGeometry(QRect(332, 190, 91, 16));
        dato11->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 80,195);\n"
"border-radius:10px;"));
        resultado10 = new QLineEdit(Bateria);
        resultado10->setObjectName("resultado10");
        resultado10->setGeometry(QRect(170, 280, 101, 21));
        resultado10->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 80,195);\n"
""));
        label_14 = new QLabel(Bateria);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(160, 310, 141, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Eras Bold ITC")});
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10 = new QLabel(Bateria);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(430, 190, 61, 20));
        label_16 = new QLabel(Bateria);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(260, 230, 141, 21));
        QFont font1;
        font1.setPointSize(12);
        label_16->setFont(font1);
        label_9 = new QLabel(Bateria);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(270, 30, 121, 21));
        label_9->setFont(font1);
        label_11 = new QLabel(Bateria);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(190, 170, 141, 51));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12 = new QLabel(Bateria);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(280, 280, 51, 31));
        pushButton = new QPushButton(Bateria);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 370, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"background-color: rgb(89, 127, 237);\n"
"border-radius:10px;\n"
"\n"
""));
        Dato = new QLineEdit(Bateria);
        Dato->setObjectName("Dato");
        Dato->setGeometry(QRect(330, 100, 91, 16));
        Dato->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 80,195);\n"
"border-radius:10px;"));
        label_2 = new QLabel(Bateria);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(148, 100, 181, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Eras Bold ITC")});
        font2.setPointSize(10);
        label_2->setFont(font2);
        label_5 = new QLabel(Bateria);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(430, 100, 49, 16));
        atras = new QPushButton(Bateria);
        atras->setObjectName("atras");
        atras->setGeometry(QRect(340, 370, 80, 24));
        atras->setStyleSheet(QString::fromUtf8("\n"
"\n"
"background-color: rgb(89, 127, 237);\n"
"border-radius:10px;\n"
"\n"
""));
        label_7 = new QLabel(Bateria);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(430, 140, 49, 16));
        label_4 = new QLabel(Bateria);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(118, 140, 211, 20));
        label_4->setFont(font2);
        dato3 = new QLineEdit(Bateria);
        dato3->setObjectName("dato3");
        dato3->setGeometry(QRect(330, 140, 91, 16));
        dato3->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 80,195);\n"
"border-radius:10px;	"));
        resultado11 = new QLineEdit(Bateria);
        resultado11->setObjectName("resultado11");
        resultado11->setGeometry(QRect(350, 280, 101, 21));
        resultado11->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 80,195);\n"
""));
        label_15 = new QLabel(Bateria);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(340, 310, 141, 21));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_13 = new QLabel(Bateria);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(460, 280, 51, 31));

        retranslateUi(Bateria);

        QMetaObject::connectSlotsByName(Bateria);
    } // setupUi

    void retranslateUi(QWidget *Bateria)
    {
        Bateria->setWindowTitle(QCoreApplication::translate("Bateria", "Form", nullptr));
        label_14->setText(QCoreApplication::translate("Bateria", "Corriente Bateria", nullptr));
        label_10->setText(QCoreApplication::translate("Bateria", "V", nullptr));
        label_16->setText(QCoreApplication::translate("Bateria", "Resultados \360\237\223\237", nullptr));
        label_9->setText(QCoreApplication::translate("Bateria", "Bateria\360\237\252\253\360\237\224\213", nullptr));
        label_11->setText(QCoreApplication::translate("Bateria", "Voltaje de la bateria \342\232\241", nullptr));
        label_12->setText(QCoreApplication::translate("Bateria", "Ah", nullptr));
        pushButton->setText(QCoreApplication::translate("Bateria", "Calcular", nullptr));
        label_2->setText(QCoreApplication::translate("Bateria", "Ingrese el consumo diario", nullptr));
        label_5->setText(QCoreApplication::translate("Bateria", "W", nullptr));
        atras->setText(QCoreApplication::translate("Bateria", "Atras", nullptr));
        label_7->setText(QCoreApplication::translate("Bateria", "W", nullptr));
        label_4->setText(QCoreApplication::translate("Bateria", "Ingrese la potencia del panel", nullptr));
        label_15->setText(QCoreApplication::translate("Bateria", "Controlador de carga", nullptr));
        label_13->setText(QCoreApplication::translate("Bateria", "Ah", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bateria: public Ui_Bateria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATERIA_H
