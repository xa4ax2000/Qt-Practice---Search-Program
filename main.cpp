#include "searchprogram.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    searchProgram w;
    w.show();

    return a.exec();
}
