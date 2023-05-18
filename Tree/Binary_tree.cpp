#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node* left = NULL;
        Node* right = NULL;

        Node(int d)
        {
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* buildTree(Node* root)
{
    int data;
    cout<<"Enter the Data : "<<endl;
    cin>>data;
    root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }
    cout<<"Enter the data for left "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for right "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
int main()
{
    Node* root = NULL;
    root = buildTree(root);
    
    return 0;
}