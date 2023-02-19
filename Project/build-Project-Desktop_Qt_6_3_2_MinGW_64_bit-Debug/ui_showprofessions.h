/********************************************************************************
** Form generated from reading UI file 'showprofessions.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPROFESSIONS_H
#define UI_SHOWPROFESSIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShowProfessions
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *ShowProfessions)
    {
        if (ShowProfessions->objectName().isEmpty())
            ShowProfessions->setObjectName(QString::fromUtf8("ShowProfessions"));
        ShowProfessions->resize(400, 300);
        verticalLayout = new QVBoxLayout(ShowProfessions);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(ShowProfessions);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(ShowProfessions);

        QMetaObject::connectSlotsByName(ShowProfessions);
    } // setupUi

    void retranslateUi(QDialog *ShowProfessions)
    {
        ShowProfessions->setWindowTitle(QCoreApplication::translate("ShowProfessions", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("ShowProfessions", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowProfessions: public Ui_ShowProfessions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPROFESSIONS_H
