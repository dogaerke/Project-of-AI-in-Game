#include "showprofessions.h"
#include "ui_showprofessions.h"

ShowProfessions::ShowProfessions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowProfessions)
{
    ui->setupUi(this);
}

ShowProfessions::~ShowProfessions()
{
    delete ui;
}
