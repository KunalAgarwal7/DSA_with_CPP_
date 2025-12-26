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
int main()
{
    vector<int> v1 = {3, 4, 2, 5, 6, 7};
    Node *head1 = convertArraytoDLL(v1);
    print(head1);

    vector<int> v2 = {3, 442, 56, 86, 7};
    Node *head2 = convertArraytoDLL(v2);
    print(head2);
}