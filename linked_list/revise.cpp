#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}
void insertAtfront(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->data = val;
    newNode->next = head;

    head = newNode;
}
void insertAtEnd(Node *&head, int val)
{
    Node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    Node *endNode = new Node(val);
    endNode->data = val;
    endNode->next = NULL;

    temp->next = endNode;
}
void deleteFromstart(Node *&head)
{
    Node *temp = head;
    head = temp->next;
    delete temp;
}
void deleteFromend(Node *&head)
{
    Node *temp = head;
    Node *d = temp->next;

    while (d->next != NULL)
    {
        d = d->next;
        temp = temp->next;
    }

    delete d;
    temp->next = NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *first = new Node(20);
    Node *second = new Node(30);
    Node *third = new Node(40);
    Node *fourth = new Node(50);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    print(head);
    insertAtEnd(head, 22);
    print(head);
    insertAtfront(head, 0);
    print(head);
    deleteFromend(head);
    print(head);
    deleteFromstart(head);
    print(head);
}