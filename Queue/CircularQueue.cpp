#include <bits/stdc++.h>
using namespace std;

// Circular Queue
class CircularQueue
{
public:
    int front;
    int rear;
    int size;
    int *arr;
    CircularQueue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if ((rear + 1) % size == front)
            return true;
        else
            return false;
    }
    void enqueue(int data)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
        }
        else if (isEmpty())
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = data;
        }
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            int i = front;
            while (i != rear)
            {
                cout << arr[i] << " ";
                i = (i + 1) % size;
            }
            cout << arr[rear] << endl;
        }
    }
};

int main()
{
    CircularQueue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}