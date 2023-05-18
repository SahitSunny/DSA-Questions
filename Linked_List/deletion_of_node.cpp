#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node* next = NULL;
    //constructor
    Node(int data)
    {
        this->data = data;
        this->next = next;
    }

    //destructor
    ~Node()
    {
        int value = this -> data;
        //memeory free.
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }   
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertT(Node* &tail, int data)
{
    Node *temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void deleteNode(int position, Node* &head, Node* &tail)
{
    if(position == 1)
    {
        //for handing first position.
        Node* temp = head;
        head = head -> next;
        //removing link
        temp -> next = NULL;
        //freeing up space.
        delete temp;
    }
    else
    {
        //deleting any middle or last node.
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        
        prev -> next = curr -> next;
        curr->next = NULL;
        delete curr;
    }
   
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertT(tail,20);
    insertT(tail,30);
    insertT(tail,40);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    print(head);

    deleteNode(4,head,tail);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    //didn't handled tail yet.
    cout<<"Tail : "<<tail->data<<endl;
    return 0;
}
