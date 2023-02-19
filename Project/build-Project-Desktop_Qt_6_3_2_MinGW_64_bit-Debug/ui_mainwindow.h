/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *gameNameLabel;
    QLabel *imageLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *playerLabel;
    QComboBox *comboBox;
    QPushButton *pNumButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *dayLabel;
    QLabel *dayNumber;
    QLabel *resultLabel;
    QGridLayout *gridLayout;
    QPushButton *nextDayButton;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(997, 637);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gameNameLabel = new QLabel(centralwidget);
        gameNameLabel->setObjectName(QString::fromUtf8("gameNameLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gameNameLabel->sizePolicy().hasHeightForWidth());
        gameNameLabel->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Stencil")});
        font1.setPointSize(50);
        gameNameLabel->setFont(font1);
        gameNameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(gameNameLabel);

        imageLabel = new QLabel(centralwidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy2);
        imageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(imageLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        playerLabel = new QLabel(centralwidget);
        playerLabel->setObjectName(QString::fromUtf8("playerLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(playerLabel->sizePolicy().hasHeightForWidth());
        playerLabel->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Stencil")});
        font2.setPointSize(13);
        playerLabel->setFont(font2);

        horizontalLayout->addWidget(playerLabel);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);
        comboBox->setFont(font2);

        horizontalLayout->addWidget(comboBox);

        pNumButton = new QPushButton(centralwidget);
        pNumButton->setObjectName(QString::fromUtf8("pNumButton"));
        pNumButton->setFont(font2);

        horizontalLayout->addWidget(pNumButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dayLabel = new QLabel(centralwidget);
        dayLabel->setObjectName(QString::fromUtf8("dayLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(dayLabel->sizePolicy().hasHeightForWidth());
        dayLabel->setSizePolicy(sizePolicy4);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Stencil")});
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setItalic(false);
        dayLabel->setFont(font3);
        dayLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(dayLabel);

        dayNumber = new QLabel(centralwidget);
        dayNumber->setObjectName(QString::fromUtf8("dayNumber"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(dayNumber->sizePolicy().hasHeightForWidth());
        dayNumber->setSizePolicy(sizePolicy5);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Stencil")});
        font4.setPointSize(20);
        font4.setBold(true);
        dayNumber->setFont(font4);

        horizontalLayout_2->addWidget(dayNumber);


        verticalLayout->addLayout(horizontalLayout_2);

        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        sizePolicy4.setHeightForWidth(resultLabel->sizePolicy().hasHeightForWidth());
        resultLabel->setSizePolicy(sizePolicy4);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Stencil")});
        font5.setPointSize(15);
        resultLabel->setFont(font5);
        resultLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(resultLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        verticalLayout->addLayout(gridLayout);

        nextDayButton = new QPushButton(centralwidget);
        nextDayButton->setObjectName(QString::fromUtf8("nextDayButton"));
        nextDayButton->setFont(font2);

        verticalLayout->addWidget(nextDayButton);

        MainWindow->setCentralWidget(centralwidget);
        imageLabel->raise();
        resultLabel->raise();
        nextDayButton->raise();
        gameNameLabel->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 997, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gameNameLabel->setText(QCoreApplication::translate("MainWindow", "WHO IS THE MURDERER?", nullptr));
        imageLabel->setText(QString());
        playerLabel->setText(QCoreApplication::translate("MainWindow", "Select player number", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "8", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "10", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "15", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "20", nullptr));

        pNumButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        dayLabel->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        dayNumber->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        resultLabel->setText(QString());
        nextDayButton->setText(QCoreApplication::translate("MainWindow", "KILL AND MOVE ON TO THE NEXT DAY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
