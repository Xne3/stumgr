#ifndef TEACHER_H
#define TEACHER_H
#include <QString>
#include "person.h"

class teacher:public person{
public:
    teacher();
    teacher(QString a,int b,QString c,QString f);
    QString getsub();
private:
    QString subject;

};
#endif // TEACHER_H
