#include<iostream>
using namespace std;
class Node
{
    public:
    Node *left;
    Node *right;
    int data;
    Node (int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    } 
};
void bst(int data,Node *&root)
{
    if (root==NULL)
    {
        root=new Node(data);
        return ;
    }
    if (root->data>data)
    {
        bst(data,root->left);
    }
    else
    {
        bst(data,root->right);
    }
}
void insertnode(Node *&root)
{
    int data;
    cin>>data;
    while (data!=-1)
    {
        bst(data,root);
        cin>>data;
    }
}
void inorder(Node *root)
{
    if (root==NULL)
    {
       return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    Node *root=NULL;
    insertnode(root);
    inorder(root);
    return 0;
}