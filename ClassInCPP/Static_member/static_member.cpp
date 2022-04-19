/*

In this we are going to see how to use static data member.
>> static data member is a member of a class which is not associated with any object.
>> static data member is a member of a class associated with only class type.
>> Need to be define in the class header file.
>> Need to be define outside the class scope to avoid linker error.
>> Can be private/public/protected.
>> Can be accessed by class name or object name.
            class name >> class_name::static_data_member_name
            object name >> object_name.static_data_member_name
 */

#include <iostream>
using namespace std;
class MyClass
{
    static int static_data_member;

public:
    void get() { static_data_member = 10; }
    void print()
    {
        static_data_member = static_data_member + 10;
        cout << "Static data member value is : " << static_data_member << endl;
    }
};
int MyClass::static_data_member = 0;
int main()
{
    MyClass obj1, obj2;
    obj1.get();
    obj1.print();
    obj2.print();
    return 0;
}
// output: img16.png
