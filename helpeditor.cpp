#include "helpeditor.h"
#include "ui_helpeditor.h"

helpeditor::helpeditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::helpeditor)
{
    ui->setupUi(this);
}

helpeditor::~helpeditor()
{
    delete ui;
}
