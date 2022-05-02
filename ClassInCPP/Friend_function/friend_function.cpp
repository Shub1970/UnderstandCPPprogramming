/*

    In this we are going to usnderstand about friend function.
        >>friend function is a global function which has access to private and protected members of the class.
        >>It break encapsulation.
        >>method of reacting the friend function, we declare it with prifix of friend in class. and put definition in the global scope.
        >>because it is a global function, it doesn't need to be invoked by object of the class, or qualified with the class name.

        Type of friend function
            >>global function
            >>a member function of a class
            >> a fuction template
 */

#include <iostream>
using namespace std;

class MyClass
{
    int data_;

public:
    MyClass(int data) : data_(data) {}
    friend void Display(MyClass &obj);
};
void Display(MyClass &obj)
{
    cout << "Data is : " << obj.data_ << endl;
}
int main()
{
    MyClass obj(10);
    Display(obj);
    return 0;
}
// output:img18.png
