#include <iostream>
using namespace std;
#include "Students.h"
extern StReg *reg;
void ProcessStudents()
{
    cout << "MALE STUDENTS: " << endl;
    int r = 1;
    St *s;
    while (s = reg->getStudent(r++))
        if (s->getGender() == St::male)
            cout << *s;
    cout << endl
         << endl;
    return;
};