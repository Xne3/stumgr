#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addstudent.h"
#include "addteacher.h"
#include "datatrans.h"
#include "qfile.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList data = file_to_data_stu();
    ui->tableWidget->setRowCount(data.size());
    ui->tableWidget->setColumnCount(4);

    QStringList strlist;
    strlist <<tr("姓名")<<tr("年龄")<<tr("性别")<<tr("学号");
    ui->tableWidget->setHorizontalHeaderLabels(strlist);
    for(int i=0;i<data.count();i++)
    {
        QStringList strline= data.at(i).split(",");

        for(int j=0;j<strline.size();j++)
        {
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(strline.at(j)));
        }
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addstu_clicked()
{
    addstudent *dialog = new addstudent(this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->exec();
}

void MainWindow::on_addteacher_clicked()
{
    addteacher *dialog = new addteacher(this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->exec();

}

void MainWindow::on_pushButton_2_clicked()
{
    QStringList data = file_to_data_stu();
    ui->tableWidget->setRowCount(data.size());
    ui->tableWidget->setColumnCount(4);

    QStringList strlist;
    strlist <<tr("姓名")<<tr("年龄")<<tr("性别")<<tr("学号");
    ui->tableWidget->setHorizontalHeaderLabels(strlist);
    for(int i=0;i<data.count();i++)
    {
        QStringList strline= data.at(i).split(",");

        for(int j=0;j<strline.size();j++)
        {
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(strline.at(j)));
        }
    }
}

void MainWindow::on_pushButton_clicked()
{
    QStringList data = file_to_data_teacher();
    ui->tableWidget->setRowCount(data.size());
    ui->tableWidget->setColumnCount(4);

    QStringList strlist;
    strlist <<tr("姓名")<<tr("年龄")<<tr("性别")<<tr("主讲课程");
    ui->tableWidget->setHorizontalHeaderLabels(strlist);
    for(int i=0;i<data.count();i++)
    {
        QStringList strline= data.at(i).split(",");

        for(int j=0;j<strline.size();j++)
        {
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(strline.at(j)));
        }
    }
}
