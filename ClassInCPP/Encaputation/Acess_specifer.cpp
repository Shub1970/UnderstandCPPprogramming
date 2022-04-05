/*
Access specifer:
    public:
    Accessible from anywhere
private:
    Accessible only from within the class
protected:
    Accessible from within the class and from derived classes
*/
#include <iostream>
#include <cmath>
using namespace std;
class complex
{
    double real, imag;

public:
    double norm()
    {
        return sqrt(real * real + imag * imag);
    }
};

int main()
{
    /*
    complex n1={4.3,5.2};
    this will create an error as we are accessing the private data  member

    complex n2={3.4,6.7};
    this will create an error as we are accessing the private data  member

    */
    return 0;
}
