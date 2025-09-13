#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forword(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void delete_at_tail(Node *&head, Node *&tail)
{
    Node *newNode = tail;
    tail = tail->prev;
    delete newNode;
    if (tail == NULL) // what if there is only one node.after delete that  we must bring head to null
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_at_tail(head, tail);

    print_forword(head);
    cout << endl;

    return 0;
}