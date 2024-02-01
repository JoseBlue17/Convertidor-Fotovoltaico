/********************************************************************************
** Form generated from reading UI file 'siguiente.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGUIENTE_H
#define UI_SIGUIENTE_H

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
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton;

    void setupUi(QWidget *siguiente)
    {
        if (siguiente->objectName().isEmpty())
            siguiente->setObjectName("siguiente");
        siguiente->resize(485, 382);
        label = new QLabel(siguiente);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 30, 321, 81));
        radioButton = new QRadioButton(siguiente);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(160, 170, 241, 22));
        radioButton_2 = new QRadioButton(siguiente);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(160, 200, 191, 22));
        radioButton_3 = new QRadioButton(siguiente);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(160, 230, 181, 22));
        pushButton = new QPushButton(siguiente);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 280, 80, 24));

        retranslateUi(siguiente);

        QMetaObject::connectSlotsByName(siguiente);
    } // setupUi

    void retranslateUi(QWidget *siguiente)
    {
        siguiente->setWindowTitle(QCoreApplication::translate("siguiente", "Form", nullptr));
        label->setText(QCoreApplication::translate("siguiente", "                                         BIENVENIDO", nullptr));
        radioButton->setText(QCoreApplication::translate("siguiente", "Calcular los paneles necesarios", nullptr));
        radioButton_2->setText(QCoreApplication::translate("siguiente", "Calcular baterias a utilizar", nullptr));
        radioButton_3->setText(QCoreApplication::translate("siguiente", "Salir del programa", nullptr));
        pushButton->setText(QCoreApplication::translate("siguiente", "Siguiente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class siguiente: public Ui_siguiente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGUIENTE_H
