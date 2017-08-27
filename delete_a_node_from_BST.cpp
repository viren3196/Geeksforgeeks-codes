/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The structure of a BST Node is as follows:
struct Node {
  int data;
  Node * right, * left;
}; */

Node* searchNode(Node *root,  int x)
{
    if(!root)
        return NULL;
    if(root->data==x)  
        return root;
    return ((root->data<x)?searchNode(root->right, x) : searchNode(root->left, x));
}

void performDelete(Node* res)
{
    if(res==NULL)
        return;
    
    if(res->left==NULL && res->right==NULL)
    {
        free(res);
        return;
    }
    if( (res->left && !res->right)   || (res->right && !res->left) )
    {
        if(res->left && !res->right)
        {
            res->data = res->left->data;
            performDelete(res->left);
        }
        else
        {
            res->data = res->right->data;
            performDelete(res->right);
        }
    }
    else
    {
        res->data = res->left->data;
        performDelete(res->left);
    }
}

Node * deleteNode(Node *root,  int x)
{
    if(!root)
        return NULL;
    Node* res = new Node();
    res = searchNode(root,x) ;
    performDelete(res);
    return root;
}
