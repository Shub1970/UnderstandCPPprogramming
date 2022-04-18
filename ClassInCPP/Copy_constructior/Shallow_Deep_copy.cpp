/*
    we know,what happen when both the data member are interdependent.
    example:int lenchar=strlen(str);
            char *str;
    In this we are understand what happen when we have a pointer to a data member.
    and we use default copy constructor.
 */

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//-------------------------Deep copy-----------------------------
class String
{
public:
    char *str_;
    size_t lenchar_;

    String(const char *str) : str_(strdup(str)), lenchar_(strlen(str_))
    {
        cout << "construct String obj" << endl;
    }
    String(const String &obj) : str_(strdup(obj.str_)), lenchar_(obj.lenchar_)
    {
        cout << "copy construct String obj" << endl;
    }
    ~String()
    {
        cout << "destruct String obj" << endl;
        free(str_);
    }
    void print()
    {
        cout << "str_:" << str_ << endl;
        cout << "lenchar_:" << lenchar_ << endl;
    }
};
void strToUpper(String a)
{
    for (int i = 0; i < a.lenchar_; i++)
    {
        a.str_[i] = toupper(a.str_[i]);
    }
    a.print();
}
int main()
{
    String a("shubham");
    a.print();
    strToUpper(a);
    a.print();
    return 0;
}
// output:img6.png

//-------------------------Shallow copy-----------------------------

class String
{
public:
    char *str_;
    size_t lenchar_;

    String(const char *str) : str_(strdup(str)), lenchar_(strlen(str_))
    {
        cout << "construct String obj" << endl;
    }
    /*  String(const String &obj) : str_(strdup(obj.str_)), lenchar_(obj.lenchar_)
    {
        cout << "copy construct String obj" << endl;
    } */
    ~String()
    {
        cout << "destruct String obj" << endl;
        free(str_);
    }
    void print()
    {
        cout << "str_:" << str_ << endl;
        cout << "lenchar_:" << lenchar_ << endl;
    }
};
void strToUpper(String a)
{
    for (int i = 0; i < a.lenchar_; i++)
    {
        a.str_[i] = toupper(a.str_[i]);
    }
    a.print();
}
int main()
{
    String a("shubham");
    a.print();
    strToUpper(a);
    a.print();
    return 0;
}
// output:img7.png
