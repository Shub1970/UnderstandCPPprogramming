#include <iostream>
using namespace std;
#include "Students.h"
void ProcessStudents();
StReg *reg = new StReg(1000);
int main()
{
    St s1("Akji", St::male);
    reg->add(&s1);
    St s2("Bijioj", St::female);
    reg->add(&s2);
    St s3("Ciojoijo", St::male);
    reg->add(&s3);
    ProcessStudents();
    return 0;
}