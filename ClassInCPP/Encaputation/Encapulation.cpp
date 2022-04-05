/*

customarily, we put data member in private section and provide member functions to access the data member, which put into public section.
        ->the state of an object can be changed only by the member functions.
        ->the behaviour of and object is accessible only by the member functions.
// This is the case for encapsulation.

 */

// write a function connect new input text file to output text fil

#include <iostream>
using namespace std;
class stack
{
public:
    char *data_;
    int top_;

public:
    void push(char x)
    {
        data_[++top_] = x;
    }
    void pop()
    {
        --top_;
    }
    bool empty()
    {
        return top_ == 0;
    }
    char top()
    {
        return data_[top_];
    }
};
int main()
{
    stack str;
    char str1[] = "hello";
    str.data_ = new char[100];
    str.top_ = -1;

    for (int i = 0; i < 5; i++)
    {
        str.push(str1[i]);
    }
    while (!str.empty())
    {
        cout << str.top();
        str.pop();
    }

    delete[] str.data_;

    return 0;
}