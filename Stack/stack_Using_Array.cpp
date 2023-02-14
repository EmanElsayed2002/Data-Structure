#include <bits/stdc++.h>
using namespace std;

// implementation of stack using array
class Stack
{
public:
    int top;
    int size;
    int *arr;
    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int data)
    {
        if (top == size - 1)
            cout << "Stack overflow" << endl;
        else
        {
            top++;
            arr[top] = data;
        }
    }
    void pop()
    {
        if (top == -1)
            cout << "Stack underflow" << endl;
        else
        {
            top--;
        }
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    void display()
    {
        if (top == -1)
            cout << "Stack is empty" << endl;
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.display();
    s.pop();
    s.display();
    s.pop();
    s.display();
    s.pop();
    s.display();
}