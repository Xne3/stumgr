#include "datatrans.h"
#include "qfile.h"
#include <QTextStream>

void studata_to_file(student &c){
    QFile file("E:/Qtproject/stumgr/stu.csv");
    file.open(QIODevice::WriteOnly|QIODevice::Append);
    QTextStream out(&file);

    out<<c.getname()<<","<<QString::number(c.getage())<<","<<c.getgender()<<","<<QString::number(c.getID())<<"\n";
    file.close();
}

void teacherdata_to_file(teacher &c){
    QFile file("E:/Qtproject/stumgr/teacher.csv");
    file.open(QIODevice::WriteOnly|QIODevice::Append);
    QTextStream out(&file);

    out<<c.getname()<<","<<QString::number(c.getage())<<","<<c.getgender()<<","<<c.getsub()<<"\n";
    file.close();
}

QStringList file_to_data_stu(){
    QFile file("E:/Qtproject/stumgr/stu.csv");
    file.open(QIODevice::ReadOnly);
    QTextStream * read = new QTextStream(&file);
    QStringList data = read->readAll().split("\n",QString::SkipEmptyParts);

    file.close();
    return data;
}

QStringList file_to_data_teacher(){
    QFile file("E:/Qtproject/stumgr/teacher.csv");
    file.open(QIODevice::ReadOnly);
    QTextStream * read = new QTextStream(&file);
    QStringList data = read->readAll().split("\n",QString::SkipEmptyParts);

    file.close();
    return data;
}
