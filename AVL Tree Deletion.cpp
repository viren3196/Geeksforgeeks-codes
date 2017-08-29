/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*Complete the following function
Node is as follows:
struct Node
{
    int data;
    Node *left;
    Node *right;
    int height;
};
*/

Node* minValue(Node* node)
{
    Node* current = node;
    while(current->left!=NULL)
        current = current->left;
    return current;
}
/*
int height(Node* node)
{
    if(!node)
        return 0;
    return 1+max(height(node->left),height(node->right));
}

int getBalance(Node* node)
{
    if(!node)
        return 0;
    return (height(node->left)-height(node->right));
}
*/
Node* leftrotate(Node* node)
{
    Node* t1, *t2;
    t1 = node->right;
    t2 = t1->left;
    t1->left = node;
    node->right = t2;
    node->height = 1+max(height(node->left),height(node->right));
    t1->height = 1+max(height(t1->left),height(t1->right));
    return t1;
}

Node* rightrotate(Node* node)
{
    Node* t1, *t2;
    t1 = node->left;
    t2 = t1->right;
    t1->right = node;
    node->left = t2;
    node->height = 1+max(height(node->left),height(node->right));
    t1->height = 1+max(height(t1->left),height(t1->right));
    return t1;
}

Node* deleteNode(Node* root, int data)
{
    if(!root)
        return NULL;
    if(root->data>data)
        root->left = deleteNode(root->left,data);
    else if(root->data<data)
        root->right = deleteNode(root->right,data);
    
    else
    {
        if(root->left==NULL || root->right==NULL)
        {
            Node* temp = root->left?root->left:root->right;
            if(temp==NULL)
            {
                temp = root;
                root=NULL;
            }
            else
                *root = *temp;
            free(temp);
        }
        else
        {
            Node* temp = minValue(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right,temp->data);
        }
    }
    
    if(!root)
        return NULL;
    root->height = 1+max(height(root->left),height(root->right));
    int balance = getBalance(root);
    
    if(balance>1 && getBalance(root->left)>=0)
    {
        return rightrotate(root);
    }
    if(balance>1 && getBalance(root->left)<0)
    {
        root->left = leftrotate(root->left);
        return rightrotate(root);
    }
    if(balance<-1 && getBalance(root->right)<=0)
    {
        return leftrotate(root);
    }
    if(balance<-1 && getBalance(root->right)>0)
    {
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }
    return root;
}










