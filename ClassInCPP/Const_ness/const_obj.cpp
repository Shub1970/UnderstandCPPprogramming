/*
    In this we are going to study about constant object.

 */

#include <iostream>
using namespace std;
class MyClass
{
    int myprimember_;

public:
    int mypubmember_;
    MyClass(int myprimember, int mypubmember) : myprimember_(myprimember), mypubmember_(mypubmember)
    {
        cout << "construct MyClass obj" << endl;
    }
    int getmember()
    {
        return myprimember_;
    }
    void setmember(int i)
    {
        myprimember_ = i;
    }
    void print()
    {
        cout << "myprimember_:" << myprimember_ << endl;
        cout << "mypubmember_:" << mypubmember_ << endl;
    }
};
int main()
{
    const MyClass obj(10, 20);
    cout << "obj.getmember():" << obj.getmember() << endl;
    obj.setmember(30);
    obj.print();
}
// output:img13.png
/* it will give error because every member function of MyClass expecting
        const this pointer pointing to non-const object.
                MyClass *const this;
        but we are this pointer pointing to const object.
                const MyClass *const this;
        to solve this we are going to add const keyword to member function.
 */

class MyClass
{
    int myprimember_;

public:
    int mypubmember_;
    MyClass(int myprimember, int mypubmember) : myprimember_(myprimember), mypubmember_(mypubmember)
    {
        cout << "construct MyClass obj" << endl;
    }
    int getmember() const
    {
        return myprimember_;
    }
    void setmember(int i)
    {
        myprimember_ = i;
    }
    void print() const
    {
        cout << "myprimember_:" << myprimember_ << endl;
        cout << "mypubmember_:" << mypubmember_ << endl;
    }
};
int main()
{
    const MyClass obj(10, 20);
    cout << "obj.getmember():" << obj.getmember() << endl;
    // obj.setmember(30);
    obj.print();
}
// output:img14.png
/*
    here we cannot call setmember() because we are not allowed to change the data member of const object.
    it is axiomatic that const object cannot change the data member.
 */
