#include "teacher.h"

teacher::teacher(){
    subject = "unknow";
}
teacher::teacher(QString a,int b,QString c,QString f){
    setname(a);
    setage(b);
    setgender(c);
    subject = f;

}

QString teacher::getsub(){
    return subject;
}
