#include "bateria.h"
#include "ui_bateria.h"
#include "A_siguiente.h"

Bateria::Bateria(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Bateria)
{
    ui->setupUi(this);
}

Bateria::~Bateria()
{
    delete ui;
}

void Bateria::on_pushButton_clicked()
{

    QString bateria=ui->dato11->text();
    QString  consumott=ui->Dato->text();
    QString panelw=ui->dato3->text();


    int panel=0.0;
    int Totalbateria=0.0;
    double Consumototal=0.0;


    Totalbateria=bateria.toInt();
    Consumototal=consumott.toDouble();
    panel=panelw.toInt();


    int id3=(Consumototal/Totalbateria);
    double id4=(panel/Totalbateria);


    ui->resultado10->setText(QString::number(id3));
    ui->resultado11->setText(QString::number(id4));
}




void Bateria::on_atras_clicked()
{
    siguiente * Bateria= new siguiente();
    Bateria->show();
    close();
}

