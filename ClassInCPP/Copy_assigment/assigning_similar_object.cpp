
/*
    what will happen if we assign a similar or same object.
    s1=s1;

 */

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

/* class String
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
        str_ = strdup(obj.str_);
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
    String s1 = "shubham";
    s1.print();
    s1 = s1;
    s1.print();
} */
// output:img11.png

//----------it will print garbage is printed-------------

//-----------to solve this problem, first check it--------------

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
        if (this != &obj)
        {
            cout << "copy assigment String obj" << endl;
            free(str_);
            str_ = strdup(obj.str_);
            lenchar_ = obj.lenchar_;
        }
        else
        {
            cout << "same object" << endl;
        }
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
    String s1 = "shubham";
    s1.print();
    s1 = s1;
    s1.print();
}
// output: img12.png