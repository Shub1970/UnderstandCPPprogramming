/*
In this one, we are going to understand about copy_assigment operator.
Assigment is quite different from copy, In assigment we are going to put the value of the right side to the left side where both are already created.
 */

#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
    double real_;
    double imag_;

public:
    Complex(double real, double imag) : real_(real), imag_(imag)
    {
        cout << "construct Complex obj \t";
        print();
    }
    Complex(const Complex &obj) : real_(obj.real_), imag_(obj.imag_)
    {
        cout << "copy construct Complex obj \t";
        print();
    }
    ~Complex()
    {
        cout << "destruct Complex obj \t";
        print();
    }
    void print()
    {
        cout << "real_:" << real_ << "imag_:" << imag_ << endl;
    }
    double norm()
    {
        return sqrt(real_ * real_ + imag_ * imag_);
    }
    Complex &operator=(const Complex &obj)
    {
        cout << "copy assigment Complex obj \t";
        print();
        real_ = obj.real_;
        imag_ = obj.imag_;
        return *this;
    }
};

int main()
{
    Complex c1(4.2, 5.6), c2(7.9, 8.9);
    Complex c3(c2); // copy construct is going to call
    c1.print();
    c2.print();
    c3.print();
    c2 = c1; // copy assigment is going to call
    c2.print();
    c1 = c2 = c3; // copy assigment is going to call
    c1.print();
    c2.print();
    c3.print();
}

// output:img7.png