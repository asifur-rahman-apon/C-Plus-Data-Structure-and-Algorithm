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

void delete_at_head(Node *&head, Node *&tail)
{
    Node *newNode = head;
    head = head->next;
    delete newNode;
    if (head == NULL) // what if there is only one node.after delete that  we must bring tail to null
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
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

    delete_at_head(head, tail);

    print_forword(head);
    cout << endl;

    return 0;
}