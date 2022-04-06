#include <iostream>
using namespace std;
// write automatic array initialization
class stack
{
private:
    char data_[10];
    int top_;

public:
    stack();
    ~stack();

    void push(char x)
    {
        if (top_ < 10)
        {
            top_++;
            data_[top_] = x;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
    void pop()
    {
        if (top_ == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            top_--;
        }
    }
    char top()
    {
        if (top_ == -1)
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        else
        {
            return data_[top_];
        }
    }
    bool empty()
    {
        if (top_ == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

stack::stack()
{
    top_ = -1;
    cout << "stack::stack() called" << endl;
}
stack::~stack()
{
    cout << "stack::~stack() called" << endl;
}
int main()
{
    stack s1;
    char str[10] = "abcdefg";
    for (int i = 0; i < 7; i++)
    {
        s1.push(str[i]);
    }
    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }

    return 0;
}
