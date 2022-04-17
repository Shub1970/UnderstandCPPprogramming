/*
    what is copy?
    well copy mean that you are copy the data member,member function into a object which will create simentaly.
 */
#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
    double real;
    double imag;

public:
    Complex(double real, double imag) : real(real), imag(imag)
    {
        cout << "constructor";
        print();
    }
    Complex(const Complex &c) : real(c.real), imag(c.imag)
    {
        cout << "copy constructor";
        print();
    }
    ~Complex()
    {
        cout << "destructor";
        print();
    }
    double norm()
    {
        return sqrt(real * real + imag * imag);
    }
    void print()
    {
        cout << "|" << real << "+j" << imag << "|=" << norm() << endl;
    }
};
void Display(Complex c)
{
    cout << "--------Display function call--------" << endl;
    cout << "Display(Complex c)";
    c.print();
    cout << "--------Display function call end--------" << endl;
}

int main()
{
    Complex c1(4.2, 5.3);
    Complex c2(c1);  // copy constructo
    Complex c3 = c2; // copy constructo
    c1.print();
    c2.print();
    c3.print();
    cout << "\n";
    Display(c3);
    cout << "\n";
    return 0;
}

// output:img4.png
