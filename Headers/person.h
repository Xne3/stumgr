#ifndef PERSON_H
#define PERSON_H

#include <QString>

class person
{
public:
    person();
    person(QString a,int b,QString c);
    person(const person &d);

    QString getname();
    int getage();
    QString getgender();
    void setname(QString a);
    void setage(int a);
    void setgender(QString a);
private:
    QString name;
    int age;
    QString gender;
};

#endif // PERSON_H
