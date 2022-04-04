// First created complex instance
// First created blue print for complex instance
/*                class complex
                {
                    public:
                    double real, imag;
                };
 */

#include <iostream>
using namespace std;

class complex
{
public:
    double real, imag;
};

// similary Let create a class with two class point,rectangel
class point
{
public:
    int x, y;
};
class rectangle
{
public:
    point topLeft, bottomRight;
};
int main()
{
    //--------------------------create complex    instance----------------------------
    complex n1 = {4.3, 5.2};
    complex n2 = {3.4, 6.7};
    cout << "n1 = " << n1.real << " + " << n1.imag << "i" << endl;
    cout << "n2 = " << n2.real << " + " << n2.imag << "i" << endl;
    //------------------------create rectangel instance----------------------------
    rectangle r1 = {{1, 2}, {3, 4}};
    rectangle r2 = {{5, 6}, {7, 8}};
    cout << "r1 = " << r1.topLeft.x << " " << r1.topLeft.y << " " << r1.bottomRight.x << " " << r1.bottomRight.y << endl;
    cout << "r2 = " << r2.topLeft.x << " " << r2.topLeft.y << " " << r2.bottomRight.x << " " << r2.bottomRight.y << endl;

    return 0;
}
