/********************************************************************************
** Form generated from reading UI file 'A_siguiente.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_A_SIGUIENTE_H
#define UI_A_SIGUIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_siguiente
{
public:
    QLabel *label;
    QRadioButton *opcion;
    QRadioButton *opcion2;
    QRadioButton *opcion3;
    QPushButton *pushButton;

    void setupUi(QWidget *siguiente)
    {
        if (siguiente->objectName().isEmpty())
            siguiente->setObjectName("siguiente");
        siguiente->resize(514, 404);
        siguiente->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #030637;"));
        label = new QLabel(siguiente);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 60, 293, 22));
        QFont font;
        font.setFamilies({QString::fromUtf8("Eras Bold ITC")});
        font.setPointSize(12);
        label->setFont(font);
        opcion = new QRadioButton(siguiente);
        opcion->setObjectName("opcion");
        opcion->setGeometry(QRect(160, 160, 241, 22));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Eras Bold ITC")});
        opcion->setFont(font1);
        opcion2 = new QRadioButton(siguiente);
        opcion2->setObjectName("opcion2");
        opcion2->setGeometry(QRect(160, 190, 191, 22));
        opcion2->setFont(font1);
        opcion3 = new QRadioButton(siguiente);
        opcion3->setObjectName("opcion3");
        opcion3->setGeometry(QRect(160, 220, 181, 22));
        opcion3->setFont(font1);
        pushButton = new QPushButton(siguiente);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 310, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 127, 237);\n"
"border-radius:10px;\n"
""));

        retranslateUi(siguiente);

        QMetaObject::connectSlotsByName(siguiente);
    } // setupUi

    void retranslateUi(QWidget *siguiente)
    {
        siguiente->setWindowTitle(QCoreApplication::translate("siguiente", "Form", nullptr));
        label->setText(QCoreApplication::translate("siguiente", "                                         BIENVENIDO\360\237\221\213\360\237\217\273", nullptr));
        opcion->setText(QCoreApplication::translate("siguiente", "Calcular los paneles necesarios", nullptr));
        opcion2->setText(QCoreApplication::translate("siguiente", "Calcular baterias a utilizar", nullptr));
        opcion3->setText(QCoreApplication::translate("siguiente", "Salir del programa", nullptr));
        pushButton->setText(QCoreApplication::translate("siguiente", "Siguiente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class siguiente: public Ui_siguiente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_A_SIGUIENTE_H
