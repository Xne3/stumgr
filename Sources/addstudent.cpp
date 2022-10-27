#include "addstudent.h"
#include "ui_addstudent.h"
#include "student.h"
#include "datatrans.h"

addstudent::addstudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addstudent)
{
    ui->setupUi(this);
}

addstudent::~addstudent()
{
    delete ui;
}


void addstudent::on_pushButton_2_clicked()
{
    QString name = ui->name->text();
    int age = ui->age->text().toUInt();
    QString gender = ui->gender->currentText();
    int ID = ui->ID->text().toInt();

    student a(name,age,gender,ID);

    studata_to_file(a);

    QWidget::close();

}
