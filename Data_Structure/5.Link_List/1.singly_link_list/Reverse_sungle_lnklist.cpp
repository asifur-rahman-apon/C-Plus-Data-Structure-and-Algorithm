#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
void print_linklist(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    cout << temp->val << endl;
    print_linklist(temp->next);
}
void reverse_linklist(Node *&head, Node *&tail, Node *temp) // recursion
{
    if (temp->next == NULL) // base case
    {
        head = temp;
        return;
    }

    reverse_linklist(head, tail, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;

    reverse_linklist(head, tail, head);
    print_linklist(head);

    return 0;
}