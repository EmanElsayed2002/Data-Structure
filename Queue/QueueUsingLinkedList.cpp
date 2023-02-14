#include <bits/stdc++.h>
using namespace std;

// Linked list implementation of Queue
class Queue
{
public:
    int data;
    Queue *next;
    Queue(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class QueueLinkedList
{
public:
    Queue *head;
    Queue *tail;
    QueueLinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void enqueue(int data)
    {
        Queue *newnode = new Queue(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void dequeue()
    {
        if (head == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            Queue *temp = head;
            head = head->next;
            delete temp;
        }
    }
    void display()
    {
        Queue *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    QueueLinkedList q;
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