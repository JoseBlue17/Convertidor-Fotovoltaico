
#include "fotovoltaico.h"
#include "./ui_fotovoltaico.h"
#include "A_siguiente.h"
Fotovoltaico::Fotovoltaico(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Fotovoltaico)
{
    ui->setupUi(this);
}

Fotovoltaico::~Fotovoltaico()
{
    delete ui;
}

void Fotovoltaico::on_pushButton_clicked()
{

    //Almacenamos las cadenas de texto

    QString  consumot=ui->dato->text();
    QString hsp=ui->dato2->text();
    QString panelw=ui->dato3->text();

 //------------------------------*-----------------------------------*-----------------------------------------*--------------------------------------*

    //Se declaran las varianbles
    double margen=1.3;
    double consumoTotal=0.0 ;
    double horasTotal =0.0;
    double wattsTotal =0.0;
    double castor=0.0;
    double sol=0.0;



    consumoTotal=consumot.toDouble();
    horasTotal=hsp.toDouble();
    wattsTotal=panelw.toInt();


//-------------------------------*----------------------------------*------------------------------------------*---------------------------------------*
    int consumo = (consumoTotal*margen)/(horasTotal*wattsTotal);//Formula para el consumo
    ui->resultado->setText(QString::number(consumo));//Muestra el resultado de la formula de consumo


  QString resul=ui->resultado->text();

//---------------------------------*---------------------------------*------------------------------------------*---------------------------------------*
   sol=resul.toDouble();
   int TotalInversor=(sol*wattsTotal);//Formula para el inversor
   ui->dato12->setText(QString::number(TotalInversor));//Muestra el resultado del inversor


}

void Fotovoltaico::on_pushButton_2_clicked()//Boton para retroceder a la pestalla llamada siguiente
{
    siguiente * fotovoltaico= new siguiente();
    fotovoltaico->show();
    close();
}



