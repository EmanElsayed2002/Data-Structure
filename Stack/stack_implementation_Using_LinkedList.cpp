#include <bits/stdc++.h>
using namespace std;

// Linked list implementation of stack
class Stack
{
public:
    int data;
    Stack *next;
    Stack(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class StackLinkedList
{
public:
    Stack *head;
    StackLinkedList()
    {
        head = NULL;
    }
    void push(int data)
    {
        Stack *newnode = new Stack(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            Stack *temp = head;
            head = head->next;
            delete temp;
        }
    }
    void display()
    {
        Stack *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    StackLinkedList s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    cout << endl;
    s.pop();
    s.pop();
    s.display();
    return 0;
}