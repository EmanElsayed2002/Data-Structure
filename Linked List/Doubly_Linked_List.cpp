#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class DoublyLinkedList
{
public:
    Node *head;
    DoublyLinkedList()
    {
        head = NULL;
    }
    void InsertFromHead(int data)
    {
        Node *newnode = new Node;
        newnode->data = data;
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }
    void InsertFromTail(int data)
    {
        Node *newnode = new Node;
        newnode->data = data;
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void DeleteFromHead()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
        }
    }
    void DeleteFromTail()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->prev->next = NULL;
            delete temp;
        }
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.InsertFromHead(1);
    dll.InsertFromHead(2);
    dll.InsertFromHead(3);
    dll.InsertFromHead(4);
    dll.InsertFromHead(5);
    dll.InsertFromTail(6);
    dll.InsertFromTail(7);
    dll.InsertFromTail(8);
    dll.InsertFromTail(9);
    dll.InsertFromTail(10);
    dll.display();
    cout << endl;
    dll.DeleteFromHead();
    dll.DeleteFromTail();
    dll.display();
    return 0;
}