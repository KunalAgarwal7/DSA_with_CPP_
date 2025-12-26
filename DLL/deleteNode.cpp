#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }

public:
    Node(int val, Node *next1, Node *prev1)
    {
        data = val;
        next = next1;
        prev = prev1;
    }
};

Node *convertArraytoDLL(vector<int> &nums)
{
    Node *head = new Node(nums[0]);
    Node *prev = head;

    for (int i = 1; i < nums.size(); ++i)
    {
        Node *temp = new Node(nums[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
    return;
}

Node *deleteFromstart(Node *&head)
{
    Node *temp = head;
    head = head->next;

    head->prev = nullptr;
    temp->next = nullptr;

    delete temp;
    return head;
}

Node *deleteFromend(Node *&head)
{
    Node *temp = head;
    Node *tail = temp;

    while (tail->next != nullptr)
        tail = tail->next;

    temp = tail->prev;

    temp->next = nullptr;
    tail->prev = nullptr;
    delete tail;

    return head;
}
int main()
{
    vector<int> v1 = {3, 4, 2, 5, 6, 7};
    Node *head1 = convertArraytoDLL(v1);
    print(head1);

    Node *deleted = deleteFromstart(head1);
    print(deleted);

    deleted = deleteFromend(head1);
    print(deleted);

    vector<int> v2 = {3, 442, 56, 86, 7};
    Node *head2 = convertArraytoDLL(v2);
    print(head2);
}