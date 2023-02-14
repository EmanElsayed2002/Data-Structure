#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    void InsertFromHead(int data)
    {
        Node *newnode = new Node;
        newnode->data = data;
        newnode->next = NULL;
        if (head == NULL)
            head = newnode;

        else
        {
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
            head = newnode;
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
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
            cout << "List is empty" << endl;
        else
        {
            Node *temp = head;
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
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
        }
    }
};

int main()
{
    LinkedList l1;
    l1.InsertFromHead(1);
    l1.InsertFromHead(2);
    l1.InsertFromHead(3);
    l1.display();
    return 0;
}