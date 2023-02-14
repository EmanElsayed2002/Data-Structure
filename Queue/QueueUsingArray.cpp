#include <bits/stdc++.h>
using namespace std;

// Array implementation of Queue
class Queue
{
public:
    int front;
    int rear;
    int size;
    int *arr;
    Queue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    void enqueue(int data)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            rear++;
            arr[rear] = data;
            if (front == -1)
            {
                front++;
            }
        }
    }
    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            front++;
        }
    }
    void display()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    cout << endl;
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}