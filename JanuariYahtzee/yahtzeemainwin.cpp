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
     * Hides the PlayerBlocker overlays
    */


}

YahtzeeMainWin::~YahtzeeMainWin()
{
    delete ui;
}

void YahtzeeMainWin::hideOptionsOnClick()
{
    // Hides the options menu on buttonclick
    ui->menuLabel->hide();
    ui->onePlayerButton->hide();
    ui->twoPlayerButton->hide();
    ui->threePlayerButton->hide();
    ui->fourPlayerButton->hide();
    ui->optionsBackground->hide();
}

void YahtzeeMainWin::showPlayerBlockersOnClick()
{
    // Shows the playerBlockers on click.
    ui->playerBlockerA->show();
    ui->playerBlockerB->show();
    ui->playerBlockerC->show();
    ui->playerBlockerD->show();
}

void YahtzeeMainWin::aButtonWasClicked()
{
    QPushButton *theButton = dynamic_cast<QPushButton*>(sender());

    qDebug() << "FUNKTIONENENENENN";

    theButton->setText("hej");
    theButton->setEnabled(false);

    ui->A7->setText("sum");
}

void YahtzeeMainWin::on_onePlayerButton_clicked()
{

    // First turns on the player blocker windows, then hides them according to how many players are playing.
    showPlayerBlockersOnClick();
    hideOptionsOnClick();
    ui->playerBlockerA->hide();
}

void YahtzeeMainWin::on_twoPlayerButton_clicked()
{
    showPlayerBlockersOnClick();
    hideOptionsOnClick();
    ui->playerBlockerA->hide();
    ui->playerBlockerB->hide();
}

void YahtzeeMainWin::on_threePlayerButton_clicked()
{
    showPlayerBlockersOnClick();
    hideOptionsOnClick();
    ui->playerBlockerA->hide();
    ui->playerBlockerB->hide();
    ui->playerBlockerC->hide();
}

void YahtzeeMainWin::on_fourPlayerButton_clicked()
{
    showPlayerBlockersOnClick();
    hideOptionsOnClick();
    ui->playerBlockerA->hide();
    ui->playerBlockerB->hide();
    ui->playerBlockerC->hide();
    ui->playerBlockerD->hide();
}

void YahtzeeMainWin::on_optionsButton_clicked()
{
    ui->menuLabel->show();
    ui->onePlayerButton->show();
    ui->twoPlayerButton->show();
    ui->threePlayerButton->show();
    ui->fourPlayerButton->show();
    ui->optionsBackground->show();
}
