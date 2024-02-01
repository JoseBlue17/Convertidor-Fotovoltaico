#include "A_siguiente.h"
#include "ui_A_siguiente.h"
#include "fotovoltaico.h"
#include"bateria.h"

siguiente::siguiente(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::siguiente)
{
    ui->setupUi(this);
}

siguiente::~siguiente()
{
    delete ui;
}

void siguiente::onpushButton_clicked()
{

    int opcion = 1;


    if(ui->opcion->isChecked()) {
        Fotovoltaico *siguiente = new Fotovoltaico();
        siguiente->show();
        close();

    } else if(ui->opcion2->isCheckable()) {
        Bateria *siguiente = new Bateria();
        siguiente->show();
         close();
    }

}
