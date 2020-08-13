/************************************************************************************************************************
* sun 20200812
* By sunguiyu96@gmail.com
* This is a countdown timer designed for debate
* Process：
* 2020/08/13 sun 18:56:Finished;
***************************************************************************************************************************/
#include "countdown.h"
#include "ui_countdown.h"
#include <QTimer>
#include "qdebug.h"

QTimer *pstimer;
QTimer *pstimer1;
QTimer *pstimer2;
Countdown::Countdown(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Countdown)
{
    ui->setupUi(this);

    ui->PSstart->setEnabled(false);
    ui->PSpause->setEnabled(false);
    ui->BDstart1->setEnabled(false);
    ui->BDstart2->setEnabled(false);
    ui->BDpause1->setEnabled(false);
    ui->BDpause2->setEnabled(false);

    ui->PSM->setSegmentStyle(QLCDNumber::Flat);
    ui->PSS->setSegmentStyle(QLCDNumber::Flat);
    ui->BDM1->setSegmentStyle(QLCDNumber::Flat);
    ui->BDS1->setSegmentStyle(QLCDNumber::Flat);
    ui->BDM2->setSegmentStyle(QLCDNumber::Flat);
    ui->BDS2->setSegmentStyle(QLCDNumber::Flat);
}

Countdown::~Countdown()
{
    delete ui;
}


void Countdown::on_PSset_clicked()
{
    int min = ui->Min->value();
    int sec = ui->Sec->value();
    tsec = 60 * min + sec;

    //qDebug() << min << ":" << sec;

    ui->PSM->display(QString::number(min));
    ui->PSS->display(QString::number(sec));

    ui->PSstart->setEnabled(true);
}

void Countdown::on_PSstart_clicked()
{
    pstimer = new QTimer(this);
    connect(pstimer, SIGNAL(timeout()), this, SLOT(count()));
    pstimer->start(1000);

    ui->PSstart->setEnabled(false);
    ui->PSpause->setEnabled(true);
}

void Countdown::count()
{
    if(tsec > 0)
    {
        tsec--;
        int min = tsec / 60;
        int sec = tsec - min * 60;

        ui->PSM->display(QString::number(min));
        ui->PSS->display(QString::number(sec));
    }
}

void Countdown::on_PSpause_clicked()
{
    pstimer->stop();

    ui->PSstart->setEnabled(true);
    ui->PSpause->setEnabled(false);
}

void Countdown::on_BDset1_clicked()
{
    int min = ui->Min_2->value();
    int sec = ui->Sec_2->value();
    tsec1 = 60 * min + sec;

    //qDebug() << min << ":" << sec;

    ui->BDM1->display(QString::number(min));
    ui->BDS1->display(QString::number(sec));

    ui->BDstart1->setEnabled(true);
}

void Countdown::on_BDset2_clicked()
{
    int min = ui->Min_2->value();
    int sec = ui->Sec_2->value();
    tsec2 = 60 * min + sec;

    //qDebug() << min << ":" << sec;

    ui->BDM2->display(QString::number(min));
    ui->BDS2->display(QString::number(sec));

    ui->BDstart2->setEnabled(true);
}

void Countdown::count1()
{
    if(tsec1 > 0)
    {
        tsec1--;
        int min = tsec1 / 60;
        int sec = tsec1 - min * 60;

        ui->BDM1->display(QString::number(min));
        ui->BDS1->display(QString::number(sec));
    }
}

void Countdown::count2()
{
    if(tsec2 > 0)
    {
        tsec2--;
        int min = tsec2 / 60;
        int sec = tsec2 - min * 60;

        ui->BDM2->display(QString::number(min));
        ui->BDS2->display(QString::number(sec));
    }
}

void Countdown::on_BDstart1_clicked()
{
    pstimer1 = new QTimer(this);
    connect(pstimer1, SIGNAL(timeout()), this, SLOT(count1()));
    pstimer1->start(1000);

    ui->BDstart1->setEnabled(false);
    ui->BDpause1->setEnabled(true);
}

void Countdown::on_BDpause1_clicked()
{
    pstimer1->stop();

    ui->BDstart1->setEnabled(true);
    ui->BDpause1->setEnabled(false);
}

void Countdown::on_BDstart2_clicked()
{
    pstimer2 = new QTimer(this);
    connect(pstimer2, SIGNAL(timeout()), this, SLOT(count2()));
    pstimer2->start(1000);

    ui->BDstart2->setEnabled(false);
    ui->BDpause2->setEnabled(true);
}

void Countdown::on_BDpause2_clicked()
{
    pstimer2->stop();

    ui->BDstart2->setEnabled(true);
    ui->BDpause2->setEnabled(false);
}
