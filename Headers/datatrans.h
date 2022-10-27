#ifndef DATATRANS_H
#define DATATRANS_H

#include <QString>
#include "person.h"
#include "student.h"
#include "teacher.h"

void studata_to_file(student &c);
void teacherdata_to_file(teacher &c);
QStringList file_to_data_stu();
QStringList file_to_data_teacher();
#endif // DATATRANS_H
