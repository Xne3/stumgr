#include "person.h"

person::person()
{
    name = QString("unkown");
    age = 0;
    gender = QString("unkown");

}

person::person(QString a,int b,QString c)
{
    name = a;
    age = b;
    gender = c;
}

person::person(const person &d)
{
    name = d.name;
    age= d.age;
    gender = d.gender;
}

QString person::getname(){
    return name;
}

int person::getage(){
    return age;
}

QString person::getgender(){
    return gender;
}

void person::setname(QString a){
    name = a;
}

void person::setage(int a){
    age =a;
}

void person::setgender(QString a){
    gender = a;
}
