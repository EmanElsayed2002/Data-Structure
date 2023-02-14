#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
};

class CircularLinkedList
{
public:
    Node *head;
    CircularLinkedList()
    {
        head = NULL;
    }
    void InsertFromHead(int data)
    {
        Node *newnode = new Node;
        newnode->data = data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            newnode->next = head;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = head;
            head = newnode;
        }
    }
    void InsertFromTail(int data)
    {
        Node *newnode = new Node;
        newnode->data = data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            newnode->next = head;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = head;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp->next != head)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << " ";
    }
    void search(int data)
    {
        Node *temp = head;
        while (temp->next != head)
        {
            if (temp->data == data)
            {
                cout << "Found" << endl;
                return;
            }
            temp = temp->next;
        }
    }
    void DeleteFromHead()
    {
        if (head == NULL)
            cout << "List is empty" << endl;
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = head->next;
            head = head->next;
            delete temp;
        }
    }

    void DeleteFromTail()
    {
        if (head == NULL)
            cout << "List is empty" << endl;
        else
        {
            Node *temp = head;
            while (temp->next->next != head)
            {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = head;
        }
    }
};

int main()
{
    CircularLinkedList l1;
    l1.InsertFromHead(1);
    l1.InsertFromHead(2);
    l1.InsertFromHead(3);
    l1.InsertFromTail(4);
    l1.display();
    return 0;
}