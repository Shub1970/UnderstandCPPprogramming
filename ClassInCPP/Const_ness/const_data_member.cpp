/*
        In this we are going to experiment with const data member in class
        #important to rember constant data member is initialized by initialize list.
        we cannot change the value of constant data member. that is also axiomatic.
 */

#include <iostream>
using namespace std;
class MyClass
{
    const int mycprimember_;
    int myprimember_;

public:
    const int mycpubmember_;
    MyClass(int myprimember, int mypubmember) : mycprimember_(myprimember), mycpubmember_(mypubmember), myprimember_(myprimember)
    {
        cout << "construct MyClass obj" << endl;
    }
    int getcprimember() const
    {
        return mycprimember_;
    }
    /*  void setcprimember(int i){
        mycprimember_ = i;
     } */
    int getprimember()
    {
        return myprimember_;
    }
    void setprimember(int i)
    {
        myprimember_ = i;
    }
};

// setcprimember is going to give error because we are changing the vlaue of constant data member.
int main()
{
    MyClass obj(10, 20);
    cout << "obj.getcprimember():" << obj.getcprimember() << endl;
    // obj.setcprimember(30);
    cout << "obj.getprimember():" << obj.getprimember() << endl;
    obj.setprimember(30);
    cout << "obj.getprimember():" << obj.getprimember() << endl;
}
// output:img15.png