/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

/* Computes the diameter of binary tree with given root.  */

int height(Node* node)
{
    if(!node)
        return 0;
    return(max(height(node->left),height(node->right))+1);
}

int diameter(Node* node)
{
    if(node==NULL)
        return 0;
    int lh = height(node->left);
    int rh = height(node->right);

    int ld = diameter(node->left);
    int rd = diameter(node->right);

    return max(lh+rh+1,max(ld,rd));
}
