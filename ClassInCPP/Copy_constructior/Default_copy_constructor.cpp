/*
    we have created a copy constructor in our previous example, in this example we going to learn about the default copy constructor.
    the default copy constructor is a copy constructor that is called when an object is copied.
    it is provided by the compiler and it is called when an object is copied.
 */

#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
    double re_;
    double im_;

public:
    Complex(double re, double im) : re_(re), im_(im)
    {
        cout << "constructor called";
        print();
    }
    /* Complex(const Complex& c):re_(c.re_),im_(c.im_){
        cout<<"copy constructor called";
        print();
    } */
    ~Complex()
    {
        cout << "destructor called";
        print();
    }
    double norm()
    {
        return sqrt(re_ * re_ + im_ * im_);
    }
    void print()
    {
        cout << "|" << re_ << "+j" << im_ << "|=" << norm() << endl;
    }
};
void Display(Complex c)
{
    cout << "Display called" << endl;
    c.print();
}
int main()
{
    Complex c1(6.2, 2.5);
    Display(c1); // free copy constructor called to copy c1 to c in Display
    return 0;
}
// output:img5.png