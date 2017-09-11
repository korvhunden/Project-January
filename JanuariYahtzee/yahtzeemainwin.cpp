#include "yahtzeemainwin.h"
#include "ui_yahtzeemainwin.h"

YahtzeeMainWin::YahtzeeMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::YahtzeeMainWin)
{
    ui->setupUi(this);


}

YahtzeeMainWin::~YahtzeeMainWin()
{
    delete ui;
}
