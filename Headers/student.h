#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include "person.h"

class student:public person{
public:
    student();
    student(QString a,int b,QString c,int f);
    int getID();
private:
    int ID;

};

#endif // STUDENT_H
