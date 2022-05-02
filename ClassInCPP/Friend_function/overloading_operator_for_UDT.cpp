/*
>understand the aspect of overloading by global function and member function
>understand how to overload operators for a UDT
>operator that can be overloaded for a UDT
    .operator+                 .operator==
    .operator-                 .operator!=
    .operator*                 .operator<
    .operator/                 .operator>
    .operator%                 .operator<=
    .operator++                .operator>=
    .operator--                .operator&&
    .operator+=                .operator||
    .operator-=                .operator[]
    .operator*=                .operator()
    .operator/=                .operator!
    .operator%=                .operator~
    .operator>>                .operator&
    .operator<<                .operator|
    .operator>>=               .operator^
>the operator :: (scope resolution) operator. (member selection) operator* (dereference) operator sizeof operator ?: cannot be overloaded
>the overload of operator -> must either return a raw pointer or return a reference to a pointer
>for a member operator function, invoking object is passed implicitly as the first argument to the function (left operand) and the member is passed as the second argument to the function (right operand) explicitly
>for a global operator function, invoking object is passed explicitly as the first argument to the function (left operand) and the global object is passed as the second argument to the function (right operand) explicitly
>for a member operator function, the return type of the function is the type of the left operand

 */

//--------------------Example1(using global function)--------------------
#include <iostream>
using namespace std;
class complex
{
public:
    double real, imag;
    complex(double r = 0, double i = 0)
    {
        real = r;
        imag = i;
    }
    ~complex() {}
    void display();
    double getreal()
    {
        return real;
    }
    double getimag()
    {
        return imag;
    }
    void setreal(double r)
    {
        real = r;
    }
    void setimg(double i)
    {
        imag = i;
    }
};
void complex::display()
{
    cout << real << "+" << imag << "i" << endl;
}
complex operator+(complex a, complex b)
{
    complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

int main()
{
    complex c1(1, 2), c2(3, 4), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}
// output:img21.png

// >>here we have to put data member in public so that global function can access it because of that it is breaking encapsulation.

//--------------------Example2(using member function)--------------------

#include <iostream>
using namespace std;

class complex
{
public:
    double real, imag;
    complex(double r = 0, double i = 0)
    {
        real = r;
        imag = i;
    }
    ~complex() {}
    void display();
    double getreal()
    {
        return real;
    }
    double getimag()
    {
        return imag;
    }
    void setreal(double r)
    {
        real = r;
    }
    void setimg(double i)
    {
        imag = i;
    }
    complex operator+(complex a) // member function
    {
        complex c;
        c.real = real + a.real;
        c.imag = imag + a.imag;
        return c;
    }
};
void complex::display()
{
    cout << real << "+" << imag << "i" << endl;
}
int main()
{
    complex c1(1, 2), c2(3, 4), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}
