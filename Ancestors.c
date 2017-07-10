/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/
// Function should print all the ancestor of the target node

int print(struct Node *root, int target)
{
    if(root==NULL)
        return 0;
     if(root->data==target)
        return 1;
     int left = print(root->left,target);
     int right = print(root->right,target);
     if(left||right)
     {
        cout<<root->data<<" ";
        return 1;
     }
     return 0;
}

bool printAncestors(struct Node *root, int target)
{
     print(root,target);
     cout<<endl;
}
