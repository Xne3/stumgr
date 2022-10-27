#include "addteacher.h"
#include "ui_addteacher.h"
#include "datatrans.h"
#include "teacher.h"

addteacher::addteacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addteacher)
{
    ui->setupUi(this);
}

addteacher::~addteacher()
{
    delete ui;
}

void addteacher::on_pushButton_2_clicked()
{
    QString name = ui->name->text();
    int age = ui->age->text().toUInt();
    QString gender = ui->gender->currentText();
    QString sub = ui->sub->text();

    teacher a(name,age,gender,sub);

    teacherdata_to_file(a);

    QWidget::close();

}
