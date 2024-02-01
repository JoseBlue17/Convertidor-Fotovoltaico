/********************************************************************************
** Form generated from reading UI file 'fotovoltaico.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOTOVOLTAICO_H
#define UI_FOTOVOLTAICO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fotovoltaico
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *dato;
    QLineEdit *dato2;
    QLineEdit *dato3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *resultado;
    QLineEdit *dato12;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_8;
    QLabel *label_16;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Fotovoltaico)
    {
        if (Fotovoltaico->objectName().isEmpty())
            Fotovoltaico->setObjectName("Fotovoltaico");
        Fotovoltaico->resize(558, 563);
        Fotovoltaico->setMouseTracking(false);
        Fotovoltaico->setStyleSheet(QString::fromUtf8("\n"
"background-color: #030637;\n"
"border-color: rgb(0, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        centralwidget = new QWidget(Fotovoltaico);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(152, 10, 251, 61));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 120, 181, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Eras Bold ITC")});
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(142, 160, 141, 16));
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 200, 211, 20));
        label_4->setFont(font1);
        dato = new QLineEdit(centralwidget);
        dato->setObjectName("dato");
        dato->setGeometry(QRect(312, 120, 91, 16));
        dato->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 80,195);\n"
"border-radius:10px;"));
        dato2 = new QLineEdit(centralwidget);
        dato2->setObjectName("dato2");
        dato2->setGeometry(QRect(312, 160, 91, 16));
        dato2->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 80,195);\n"
"border-radius:10px;\n"
"			"));
        dato3 = new QLineEdit(centralwidget);
        dato3->setObjectName("dato3");
        dato3->setGeometry(QRect(312, 200, 91, 16));
        dato3->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 80,195);\n"
"border-radius:10px;	"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(412, 120, 49, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(412, 160, 49, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(412, 200, 49, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(170, 420, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"background-color: rgb(89, 127, 237);\n"
"border-radius:10px;\n"
"\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(320, 420, 80, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"background-color: rgb(89, 127, 237);\n"
"border-radius:10px;\n"
"\n"
""));
        resultado = new QLineEdit(centralwidget);
        resultado->setObjectName("resultado");
        resultado->setGeometry(QRect(152, 320, 101, 21));
        resultado->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 80,195);"));
        dato12 = new QLineEdit(centralwidget);
        dato12->setObjectName("dato12");
        dato12->setGeometry(QRect(320, 320, 91, 21));
        dato12->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 80,195);"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(340, 360, 141, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Eras Bold ITC")});
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(250, 320, 41, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(160, 360, 101, 21));
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(230, 270, 141, 21));
        QFont font3;
        font3.setPointSize(12);
        label_16->setFont(font3);
        Fotovoltaico->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Fotovoltaico);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 558, 22));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        Fotovoltaico->setMenuBar(menubar);
        statusbar = new QStatusBar(Fotovoltaico);
        statusbar->setObjectName("statusbar");
        Fotovoltaico->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(Fotovoltaico);

        QMetaObject::connectSlotsByName(Fotovoltaico);
    } // setupUi

    void retranslateUi(QMainWindow *Fotovoltaico)
    {
        Fotovoltaico->setWindowTitle(QCoreApplication::translate("Fotovoltaico", "Fotovoltaico", nullptr));
        label->setText(QCoreApplication::translate("Fotovoltaico", "            Convertidor Fotovoltaico \342\233\205", nullptr));
        label_2->setText(QCoreApplication::translate("Fotovoltaico", "Ingrese el consumo diario", nullptr));
        label_3->setText(QCoreApplication::translate("Fotovoltaico", "Ingrese la hora pico", nullptr));
        label_4->setText(QCoreApplication::translate("Fotovoltaico", "Ingrese la potencia del panel", nullptr));
        label_5->setText(QCoreApplication::translate("Fotovoltaico", "W", nullptr));
        label_6->setText(QCoreApplication::translate("Fotovoltaico", "H", nullptr));
        label_7->setText(QCoreApplication::translate("Fotovoltaico", "W", nullptr));
        pushButton->setText(QCoreApplication::translate("Fotovoltaico", "Calcular", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Fotovoltaico", "Atras", nullptr));
        label_13->setText(QCoreApplication::translate("Fotovoltaico", "Inversor", nullptr));
        label_15->setText(QCoreApplication::translate("Fotovoltaico", "Cant", nullptr));
        label_8->setText(QCoreApplication::translate("Fotovoltaico", "Total de paneles", nullptr));
        label_16->setText(QCoreApplication::translate("Fotovoltaico", "Resultados \360\237\223\237", nullptr));
        menu->setTitle(QCoreApplication::translate("Fotovoltaico", "\342\230\200\357\270\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fotovoltaico: public Ui_Fotovoltaico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOTOVOLTAICO_H
