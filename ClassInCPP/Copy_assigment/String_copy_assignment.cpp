/*
    In this slide we are going to understand about the behaviour of copy assigment operator when the data member is a pointer.
    In this case we are going to understand about shallow copy.
    as well deep copy.
 */

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

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
    String &operator=(const String &obj)
    {
        cout << "copy assigment String obj" << endl;
        free(str_);
        str_ = obj.str_;
        lenchar_ = obj.lenchar_;
        return *this;
    }
    void print()
    {
        cout << "str_:" << str_ << "\t";
        cout << "lenchar_:" << lenchar_ << endl;
    }
};

int main()
{
    String s1 = "shubham", s2 = "shivam";
    s1.print();
    s2.print();
    s1 = s2;
    s1.print();
    s2.print();
}
// output:img9

//-------------------------shallow copy see error-------------------------
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
    String &operator=(const String &obj)
    {
        cout << "copy assigment String obj" << endl;
        free(str_);
        str_ = obj.str_;
        lenchar_ = obj.lenchar_;
        return *this;
    }
    void print()
    {
        cout << "str_:" << str_ << "\t";
        cout << "lenchar_:" << lenchar_ << endl;
    }
    void delstr() // delete string of object
    {
        free(str_);
    }
};

int main()
{
    String s1 = "shubham", s2 = "shivam";
    s1.print();
    s2.print();
    s1 = s2;
    s1.delstr();
    s1.print();
    s2.print();
}
// output:img10