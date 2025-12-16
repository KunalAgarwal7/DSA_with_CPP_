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
int main()
{
    // Creating a node with the help of class
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    vector<int> v;
    // Traversing a node
    Node *temp = head;

    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }

    reverse(v.begin(), v.end());
    for (auto x : v)
        cout << x << " ";

    return 0;
}