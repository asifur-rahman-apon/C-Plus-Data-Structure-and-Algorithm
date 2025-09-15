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
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode; // or, tail = tail->next
}
void print_link_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true) // whole loop means linklist input complexity O(N)with tail tracing. and without O(N*N)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val); // this is optimized form so here time complexity O(1). without tail tracing O(N)
    }
    print_link_list(head);

    return 0;
}
