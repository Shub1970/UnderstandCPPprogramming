/* solving same node-list problem using friend class instead of friend member function */

/*
    A friend class is a class that is declared as a friend of another class.
    ->has access to private members of the other class.
    ->does not have its name qualified with the name of the other class.
    ->can be declared friend in more then one class.
    ->class can be a
            .class
            .class template


 */

#include <iostream>
using namespace std;

class Node;

class List
{
    Node *head;
    Node *tail;

public:
    List(Node *h = 0) : head(h), tail(h) {}
    void display();
    void append(Node *n);
};
class Node
{
    int data;
    Node *next;

public:
    Node(int i) : data(i), next(0) {}
    friend class List; // now list can access private members of node
};

void List::append(Node *n)
{
    if (head == 0)
    {
        head = n;
        tail = n;
    }
    else
    {
        tail->next = n;
        tail = n;
    }
}
void List::display()
{
    Node *p = head;
    while (p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    List l1(n1);
    l1.append(n2);
    l1.append(n3);
    l1.display();
}
