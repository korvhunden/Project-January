#include "yahtzeemainwin.h"
#include "ui_yahtzeemainwin.h"
#include <QDebug>
#include <QAbstractButton>

YahtzeeMainWin::YahtzeeMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::YahtzeeMainWin)
{
    ui->setupUi(this);

    /*
     * En funktion som connectar alla knappar i layouterna Agrid, Bgrid, Cgrid och Dgrid.
     * Funktionen är inspirerad från GUI labbarna samt stackexchange sidan https://stackoverflow.com/questions/4065378/qt-get-children-from-layout
     */
    for(int i = 0; i < ui->Agrid->count(); i++){
        QWidget *button = ui->Agrid->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }
    for(int i = 0; i < ui->Bgrid->count(); i++){
        QWidget *button = ui->Bgrid->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }
    for(int i = 0; i < ui->Cgrid->count(); i++){
        QWidget *button = ui->Cgrid->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }
    for(int i = 0; i < ui->Dgrid->count(); i++){
        QWidget *button = ui->Dgrid->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }

    /*
     * Disables the sum and bonus pushbuttons, these values are automated by the DiceBrain.
     */
    ui->A7->setEnabled(false);
    ui->A8->setEnabled(false);
    ui->A19->setEnabled(false);
    ui->B7->setEnabled(false);
    ui->B8->setEnabled(false);
    ui->B19->setEnabled(false);
    ui->C7->setEnabled(false);
    ui->C8->setEnabled(false);
    ui->C19->setEnabled(false);
    ui->D7->setEnabled(false);
    ui->D8->setEnabled(false);
    ui->D19->setEnabled(false);

    /*
     * Hides the PlayerBlocker overlays
    */
    ui->playerBlockerA->hide();
    ui->playerBlockerB->hide();
    ui->playerBlockerC->hide();
    ui->playerBlockerD->hide();

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
    ui->playerBlockerB->show();
}
