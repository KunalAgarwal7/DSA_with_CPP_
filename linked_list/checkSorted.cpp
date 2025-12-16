#include <bits/stdc++.h>
using namespace std;

// linked list node class
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
bool check(Node *&head)
{
    Node *temp = head;

    while (temp->next != NULL)
    {
        if (temp->data > temp->next->data)
            return false;

        temp = temp->next;
    }

    return true;
}
int main()
{
    // Creating a node with the help of class
    Node *head = new Node(1);
    Node *second = new Node(3);
    Node *third = new Node(9);
    Node *fourth = new Node(2);

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    cout << check(head);

    return 0;
}