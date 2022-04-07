/*
>constructor overloading work similar to function overloading.
>how to function are choosen based on the number of arguments.
        >Exact match
        >Promotion(on conversion no data lose)
        >Standard conversion(on conversion no data lose)
        >user defined conversion(on conversion no data lose)
 */
#include <iostream>
using namespace std;
double sqrt(double x)
{
    return x * x;
}
class complex
{
    double real_;
    double imag_;

public:
    complex(double real, double imag) : real_(real), imag_(imag) {}
    complex(double real) : real_(real), imag_(0.0) {}
    complex() : real_(0.0), imag_(0.0) {}

    double norm() { return sqrt(real_ * real_ + imag_ * imag_); }
    void print() { cout << real_ << " + " << imag_ << "i" << endl; }
};
int main()
{

    complex c1(1.0, 2.0);
    complex c2(3.0);
    complex c3;
    cout << "c1.norm()=" << c1.norm() << endl;
    c1.print();
    c2.print();
    c3.print();
    return 0;
}