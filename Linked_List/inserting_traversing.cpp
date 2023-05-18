#include <iostream>
#include <string>
using namespace std;
class Node
{
public:
    string data;
    Node *next = NULL;
    Node(string data)
    {
        this->data = data;
        this->next = next;
    }
};

// Inserting at Head
void insertH(Node *&head, string s)
{
    Node *temp = new Node(s);
    temp->next = head;
    head = temp;
}

// inserting at Tail
void insertT(Node *&tail, string s)
{
    Node *temp = new Node(s);
    tail->next = temp;
    tail = temp;
}

// inserting at middle.
void insertM(Node *&head, Node *&tail, int position, string d)
{
    // to insert at head.
    if (position == 1)
    {
        insertH(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // to insert at end.
    if (temp->next == NULL)
    {
        insertT(tail, d);
        return;
    }
    Node *NodetobeInserted = new Node(d);
    NodetobeInserted->next = temp->next;
    temp->next = NodetobeInserted;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node("Sahit");
    // cout<<node1->data;
    Node *head = node1;

    // inserting at head
    //  insertH(head, "Maidi");
    //  insertH(head,"Sunny");
    //  insertH(head, "B");
    //  print(head);

    Node *tail = node1;

    // inserting at tail
    insertT(tail, "Maidi");
    insertT(tail, "Sunny");
    insertT(tail, "B");
    // print(head);

    // inserting at mid
    insertM(head, tail, 2, "Rajnandini");
    print(head);
    insertM(head, tail, 1, "SR");
    print(head);

    insertM(head, tail, 7, "SSRR");
    print(head);

    cout<<head -> data<<endl;
    cout<<tail->data<<endl;
    return 0;
}