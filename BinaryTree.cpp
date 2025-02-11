#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree{
    public:

    //insert left
    void insertL(Node*root, Node*newNode)
    {
        if(root->left==NULL)
        {
            root->left = newNode;
            return;
        }
        insertL(root->left, newNode);
    }

    //insert right
    void insertR(Node*root, Node*newNode)
    {
        if(root->right==NULL)
        {
            root->right = newNode;
            return;
        }
        insertR(root->right, newNode);
    }

    //preorder
    void preorder(Node*root)
    {
        if(root == NULL)
        {
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

    //inorder
    void inorder(Node*root)
    {
        if(root == NULL)
        {
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }

    //postorder
    void postorder(Node*root)
    {
        if(root==NULL)
        {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

};

int main()
{
    Node*root = NULL;
    BinaryTree b;
    int t, ch,val;
    char s;
    do
    {
        cout<<"1.insert data\n2.display\nenter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"enter data"<<endl;
            cin>>val;
            Node*newNode = new Node(val);
            if(root == NULL)
            {
                root = newNode;
            }
            else
            {
                cout<<"enter your choice left(L/l) or right(R/r):"<<endl;
                cin>>s;
                if(s=='l' || s=='L')
                {
                    b.insertL(root, newNode);
                }
                else if(s=='r' || s=='R')
                {
                    b.insertR(root, newNode);
                }
                else
                {
                    cout<<"wrong choice"<<endl;
                }
            }
                break;
            }
            
            case 2:
            {
            cout<<"elements by preorder are"<<endl;
            b.preorder(root);
            cout<<endl;
            cout<<"elements by inorder are"<<endl;
            b.inorder(root);
            cout<<endl;
            cout<<"elements by postorder are"<<endl;
            b.postorder(root);
            cout<<endl;
            break;
            }
            
            default:
            cout<<"wrong choice"<<endl;
            break;
        }
        cout<<"if you want continue press 1 ="<<endl;
        cin>>t;
    }while(t==1);
}