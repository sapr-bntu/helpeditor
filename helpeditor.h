#ifndef HELPEDITOR_H
#define HELPEDITOR_H

#include <QMainWindow>

namespace Ui {
    class helpeditor;
}

class helpeditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit helpeditor(QWidget *parent = 0);
    ~helpeditor();

private:
    Ui::helpeditor *ui;
};

#endif // HELPEDITOR_H
