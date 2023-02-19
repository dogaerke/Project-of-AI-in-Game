#ifndef SHOWPROFESSIONS_H
#define SHOWPROFESSIONS_H

#include <QDialog>

namespace Ui {
class ShowProfessions;
}

class ShowProfessions : public QDialog
{
    Q_OBJECT

public:
    explicit ShowProfessions(QWidget *parent = nullptr);
    ~ShowProfessions();

private:
    Ui::ShowProfessions *ui;
};

#endif // SHOWPROFESSIONS_H
