#include "student.h"

student::student(){
    ID= 0;
}
student::student(QString a,int b,QString c,int f){
    setname(a);
    setage(b);
    setgender(c);
    ID = f;

}

int student::getID(){
    return ID;
}
