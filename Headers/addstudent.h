#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H
#include <QDialog>

namespace Ui {
class addstudent;
}

class addstudent : public QDialog
{
    Q_OBJECT

public:
    explicit addstudent(QWidget *parent = nullptr);
    ~addstudent();

private slots:

    void on_pushButton_2_clicked();

private:
    Ui::addstudent *ui;
};

#endif // ADDSTUDENT_H
