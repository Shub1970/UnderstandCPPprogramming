// First stem should be to create class
#include <iostream>
using namespace std;
class complex
{
public:
    double real, imag;
};

int main()
{
    complex n1 = {4.3, 5.2};
    complex n2 = {3.4, 6.7};
    cout << "n1 = " << n1.real << " + " << n1.imag << "i" << endl;
    cout << "n2 = " << n2.real << " + " << n2.imag << "i" << endl;
    return 0;
}