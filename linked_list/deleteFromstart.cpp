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

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

void insertAtbegin(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->data = val;
    newNode->next = head;

    head = newNode;
}

void insertAtend(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->data = val;
    newNode->next = NULL;

    Node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void deleteFront(Node *&head)
{
    Node *temp = head;
    head = temp->next;
    delete temp;
}
int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;

    print(head);
    insertAtbegin(head, 5);
    print(head);
    insertAtend(head, 22);
    print(head);
    deleteFront(head);
    print(head);
}