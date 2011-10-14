#include <QtGui/QApplication>
#include "helpeditor.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    helpeditor w;
    w.show();

    return a.exec();
}
