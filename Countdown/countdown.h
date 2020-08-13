#ifndef COUNTDOWN_H
#define COUNTDOWN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Countdown; }
QT_END_NAMESPACE

class Countdown : public QMainWindow
{
    Q_OBJECT

public:
    Countdown(QWidget *parent = nullptr);
    ~Countdown();

    int tsec;
    int tsec1;
    int tsec2;

private slots:
    void on_PSset_clicked();

    void on_PSstart_clicked();

    void count();

    void on_PSpause_clicked();

    void on_BDset1_clicked();

    void on_BDset2_clicked();

    void count1();

    void count2();

    void on_BDstart1_clicked();

    void on_BDpause1_clicked();

    void on_BDstart2_clicked();

    void on_BDpause2_clicked();


private:
    Ui::Countdown *ui;
};
#endif // COUNTDOWN_H
