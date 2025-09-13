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
void print_backword(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}
void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

// if there is tail.
//  void insert_at_head(Node *&head, Node *&tail, int val)
//  {
//      Node *newnode = new Node(val);
//      if (head == NULL)
//      {
//          head = newnode;
//          tail = newnode;
//          return;
//      }
//      newnode->next = head;
//      head->prev = newnode;
//      head = newnode;
//  }

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    // Node *tail = new Node(30);

    head->next = a;

    a->prev = head;
    // a->next = tail;
    a->next = b;

    // tail->prev = a;
    b->prev = a;

    insert_at_head(head, 100);
    // insert_at_head(head,tail, 100);
    print_forword(head);
    cout << endl;

    return 0;
}