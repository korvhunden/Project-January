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

private:
    Ui::YahtzeeMainWin *ui;
};

#endif // YAHTZEEMAINWIN_H
