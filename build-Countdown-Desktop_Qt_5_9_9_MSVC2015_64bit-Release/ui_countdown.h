/********************************************************************************
** Form generated from reading UI file 'countdown.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTDOWN_H
#define UI_COUNTDOWN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Countdown
{
public:
    QAction *actionsunguiyu96_gmail_com;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *PS;
    QLabel *label;
    QLCDNumber *PSM;
    QLabel *label_2;
    QLCDNumber *PSS;
    QPushButton *PSset;
    QPushButton *PSstart;
    QPushButton *PSpause;
    QLabel *label_3;
    QSpinBox *Min;
    QSpinBox *Sec;
    QWidget *DB;
    QLCDNumber *BDS1;
    QSpinBox *Sec_2;
    QPushButton *BDset1;
    QPushButton *BDstart1;
    QLabel *label_4;
    QPushButton *BDpause1;
    QLCDNumber *BDM1;
    QSpinBox *Min_2;
    QPushButton *BDpause2;
    QLabel *label_5;
    QPushButton *BDstart2;
    QLCDNumber *BDM2;
    QLCDNumber *BDS2;
    QLabel *label_6;
    QPushButton *BDset2;
    QMenuBar *menubar;
    QMenu *menuAnthor;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Countdown)
    {
        if (Countdown->objectName().isEmpty())
            Countdown->setObjectName(QStringLiteral("Countdown"));
        Countdown->resize(1073, 773);
        actionsunguiyu96_gmail_com = new QAction(Countdown);
        actionsunguiyu96_gmail_com->setObjectName(QStringLiteral("actionsunguiyu96_gmail_com"));
        centralwidget = new QWidget(Countdown);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1061, 731));
        tabWidget->setStyleSheet(QString::fromUtf8("font: 22pt \"\351\273\221\344\275\223\";\n"
"background-color:rgb(255, 190, 26)"));
        PS = new QWidget();
        PS->setObjectName(QStringLiteral("PS"));
        label = new QLabel(PS);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(500, 158, 21, 181));
        label->setStyleSheet(QString::fromUtf8("font: 48pt \"\351\273\221\344\275\223\";"));
        PSM = new QLCDNumber(PS);
        PSM->setObjectName(QStringLiteral("PSM"));
        PSM->setGeometry(QRect(333, 160, 131, 181));
        label_2 = new QLabel(PS);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(880, 590, 21, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 28pt \"\351\273\221\344\275\223\";"));
        PSS = new QLCDNumber(PS);
        PSS->setObjectName(QStringLiteral("PSS"));
        PSS->setGeometry(QRect(550, 160, 131, 181));
        PSset = new QPushButton(PS);
        PSset->setObjectName(QStringLiteral("PSset"));
        PSset->setGeometry(QRect(690, 610, 101, 41));
        PSset->setStyleSheet(QLatin1String("background-color:rgb(255, 190, 26);\n"
"font: 16pt \"Arial\";"));
        PSstart = new QPushButton(PS);
        PSstart->setObjectName(QStringLiteral("PSstart"));
        PSstart->setGeometry(QRect(350, 400, 101, 61));
        PSstart->setStyleSheet(QStringLiteral("background-color:rgb(255, 190, 26)"));
        PSpause = new QPushButton(PS);
        PSpause->setObjectName(QStringLiteral("PSpause"));
        PSpause->setGeometry(QRect(570, 400, 101, 61));
        PSpause->setStyleSheet(QStringLiteral("background-color:rgb(255, 190, 26)"));
        label_3 = new QLabel(PS);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 40, 351, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 36pt \"\351\273\221\344\275\223\";"));
        Min = new QSpinBox(PS);
        Min->setObjectName(QStringLiteral("Min"));
        Min->setGeometry(QRect(821, 590, 51, 61));
        Min->setMaximum(999);
        Min->setValue(1);
        Sec = new QSpinBox(PS);
        Sec->setObjectName(QStringLiteral("Sec"));
        Sec->setGeometry(QRect(910, 590, 51, 61));
        Sec->setMaximum(9999);
        Sec->setValue(30);
        tabWidget->addTab(PS, QString());
        DB = new QWidget();
        DB->setObjectName(QStringLiteral("DB"));
        BDS1 = new QLCDNumber(DB);
        BDS1->setObjectName(QStringLiteral("BDS1"));
        BDS1->setGeometry(QRect(320, 162, 131, 181));
        Sec_2 = new QSpinBox(DB);
        Sec_2->setObjectName(QStringLiteral("Sec_2"));
        Sec_2->setGeometry(QRect(570, 600, 51, 61));
        Sec_2->setMaximum(9999);
        Sec_2->setValue(30);
        BDset1 = new QPushButton(DB);
        BDset1->setObjectName(QStringLiteral("BDset1"));
        BDset1->setGeometry(QRect(200, 610, 171, 41));
        BDset1->setStyleSheet(QLatin1String("background-color:rgb(255, 190, 26);\n"
"font: 16pt \"Arial\";"));
        BDstart1 = new QPushButton(DB);
        BDstart1->setObjectName(QStringLiteral("BDstart1"));
        BDstart1->setGeometry(QRect(120, 440, 101, 61));
        BDstart1->setStyleSheet(QStringLiteral("background-color:rgb(255, 190, 26)"));
        label_4 = new QLabel(DB);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 70, 311, 61));
        label_4->setStyleSheet(QString::fromUtf8("font: 36pt \"\351\273\221\344\275\223\";"));
        BDpause1 = new QPushButton(DB);
        BDpause1->setObjectName(QStringLiteral("BDpause1"));
        BDpause1->setGeometry(QRect(340, 440, 101, 61));
        BDpause1->setStyleSheet(QStringLiteral("background-color:rgb(255, 190, 26)"));
        BDM1 = new QLCDNumber(DB);
        BDM1->setObjectName(QStringLiteral("BDM1"));
        BDM1->setGeometry(QRect(103, 162, 131, 181));
        Min_2 = new QSpinBox(DB);
        Min_2->setObjectName(QStringLiteral("Min_2"));
        Min_2->setGeometry(QRect(460, 600, 51, 61));
        Min_2->setMaximum(999);
        Min_2->setValue(1);
        BDpause2 = new QPushButton(DB);
        BDpause2->setObjectName(QStringLiteral("BDpause2"));
        BDpause2->setGeometry(QRect(850, 440, 101, 61));
        BDpause2->setStyleSheet(QStringLiteral("background-color:rgb(255, 190, 26)"));
        label_5 = new QLabel(DB);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(580, 70, 361, 61));
        label_5->setStyleSheet(QString::fromUtf8("font: 36pt \"\351\273\221\344\275\223\";"));
        BDstart2 = new QPushButton(DB);
        BDstart2->setObjectName(QStringLiteral("BDstart2"));
        BDstart2->setGeometry(QRect(640, 440, 101, 61));
        BDstart2->setStyleSheet(QStringLiteral("background-color:rgb(255, 190, 26)"));
        BDM2 = new QLCDNumber(DB);
        BDM2->setObjectName(QStringLiteral("BDM2"));
        BDM2->setGeometry(QRect(613, 162, 131, 181));
        BDS2 = new QLCDNumber(DB);
        BDS2->setObjectName(QStringLiteral("BDS2"));
        BDS2->setGeometry(QRect(830, 162, 131, 181));
        label_6 = new QLabel(DB);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(530, 600, 21, 61));
        label_6->setStyleSheet(QString::fromUtf8("font: 28pt \"\351\273\221\344\275\223\";"));
        BDset2 = new QPushButton(DB);
        BDset2->setObjectName(QStringLiteral("BDset2"));
        BDset2->setGeometry(QRect(720, 610, 181, 41));
        BDset2->setStyleSheet(QLatin1String("background-color:rgb(255, 190, 26);\n"
"font: 16pt \"Arial\";"));
        tabWidget->addTab(DB, QString());
        Countdown->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Countdown);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1073, 22));
        menuAnthor = new QMenu(menubar);
        menuAnthor->setObjectName(QStringLiteral("menuAnthor"));
        Countdown->setMenuBar(menubar);
        statusbar = new QStatusBar(Countdown);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Countdown->setStatusBar(statusbar);

        menubar->addAction(menuAnthor->menuAction());
        menuAnthor->addAction(actionsunguiyu96_gmail_com);

        retranslateUi(Countdown);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Countdown);
    } // setupUi

    void retranslateUi(QMainWindow *Countdown)
    {
        Countdown->setWindowTitle(QApplication::translate("Countdown", "Countdown", Q_NULLPTR));
        actionsunguiyu96_gmail_com->setText(QApplication::translate("Countdown", "sunguiyu96@gmail.com", Q_NULLPTR));
        label->setText(QApplication::translate("Countdown", ":", Q_NULLPTR));
        label_2->setText(QApplication::translate("Countdown", ":", Q_NULLPTR));
        PSset->setText(QApplication::translate("Countdown", "Set value", Q_NULLPTR));
        PSstart->setText(QApplication::translate("Countdown", "Start", Q_NULLPTR));
        PSpause->setText(QApplication::translate("Countdown", "Pause", Q_NULLPTR));
        label_3->setText(QApplication::translate("Countdown", "Personal State", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(PS), QApplication::translate("Countdown", " Persenal State", Q_NULLPTR));
        BDset1->setText(QApplication::translate("Countdown", "Set Positive side", Q_NULLPTR));
        BDstart1->setText(QApplication::translate("Countdown", "Start", Q_NULLPTR));
        label_4->setText(QApplication::translate("Countdown", "Positive side", Q_NULLPTR));
        BDpause1->setText(QApplication::translate("Countdown", "Pause", Q_NULLPTR));
        BDpause2->setText(QApplication::translate("Countdown", "Pause", Q_NULLPTR));
        label_5->setText(QApplication::translate("Countdown", "  Negative side", Q_NULLPTR));
        BDstart2->setText(QApplication::translate("Countdown", "Start", Q_NULLPTR));
        label_6->setText(QApplication::translate("Countdown", ":", Q_NULLPTR));
        BDset2->setText(QApplication::translate("Countdown", "Set Negative side", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(DB), QApplication::translate("Countdown", " DEBATE", Q_NULLPTR));
        menuAnthor->setTitle(QApplication::translate("Countdown", "Anthor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Countdown: public Ui_Countdown {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTDOWN_H
