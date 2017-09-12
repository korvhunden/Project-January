#include "yahtzeemainwin.h"
#include "ui_yahtzeemainwin.h"
#include <QDebug>
#include <QAbstractButton>

YahtzeeMainWin::YahtzeeMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::YahtzeeMainWin)
{
    ui->setupUi(this);

    // connect all buttons
    // add graphics scene OPTIONS menu

    for(int i = 0; i < ui->Agrid->count(); i++)
    {

        QWidget *button = ui->Agrid->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }

    ui->A7->setEnabled(false);
    ui->A8->setEnabled(false);
    ui->A19->setEnabled(false);



}

YahtzeeMainWin::~YahtzeeMainWin()
{
    delete ui;
}

void YahtzeeMainWin::aButtonWasClicked()
{
    QPushButton *theButton = dynamic_cast<QPushButton*>(sender());

    qDebug() << "FUNKTIONENENENENN";

    theButton->setText("hej");
    theButton->setEnabled(false);

    ui->A7->setText("sum");
}
