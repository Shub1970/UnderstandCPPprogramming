/* working with initialization list
    whether the assigment of the value is done in the order of the initialization list or not
    */
/* #include <iostream>
using namespace std;
int init_m1(int m)
{
    cout << "I was called init_m1  " << m << endl;
    return m;
}
int init_m2(int m)
{
    cout << "I was called init_m2  " << m << endl;
    return m;
}
class x
{
    int m1_;
    int m2_;

public:
    x(int m1, int m2) : m1_(init_m1(m1)), m2_(init_m2(m2))
    {
        cout << "Construction occur" << endl;
    }
    ~x()
    {
        cout << "Destruction occur" << endl;
    }
};
int main()
{
    x m(3, 4);
    return 0;
}
//output:img1.png
*/

//-----------------------let swap order of data member initialization----------`
#include <iostream>
using namespace std;
int init_m1(int m)
{
    cout << "I was called init_m1  " << m << endl;
    return m;
}
int init_m2(int m)
{
    cout << "I was called init_m2  " << m << endl;
    return m;
}
class x
{
    int m2_;
    int m1_;

public:
    x(int m1, int m2) : m1_(init_m1(m1)), m2_(init_m2(m2))
    {
        cout << "Construction occur" << endl;
    }
    ~x()
    {
        cout << "Destruction occur" << endl;
    }
};
int main()
{
    x m(3, 4);
    return 0;
}
// output:img2.png
