#ifndef YAHTZEEMAINWIN_H
#define YAHTZEEMAINWIN_H

#include <QMainWindow>

namespace Ui {
class YahtzeeMainWin;
}

class YahtzeeMainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit YahtzeeMainWin(QWidget *parent = 0);
    ~YahtzeeMainWin();
    void hideOptionsOnClick();
    void showPlayerBlockersOnClick();



private:
    Ui::YahtzeeMainWin *ui;

private slots:
    void aButtonWasClicked();
    void on_onePlayerButton_clicked();
    void on_twoPlayerButton_clicked();
    void on_threePlayerButton_clicked();
    void on_fourPlayerButton_clicked();

    void on_optionsButton_clicked();
};

#endif // YAHTZEEMAINWIN_H
