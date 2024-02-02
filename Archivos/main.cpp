#include "A_siguiente.h"
#include "fotovoltaico.h"
#include"bateria.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    siguiente w;
    Fotovoltaico w2;
    Bateria w3;
  //  w2.show();
    w.show();

    return a.exec();

}
