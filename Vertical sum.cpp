/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*Complete the function below
Node is as follows:
struct Node{
int data;
Node *left,*right;
};
*/

void util(Node* root, map<int,int>&m, int &hd)
{
    m[hd] += root->data;
    if(root->left)
    {
        int t = hd-1;
        util(root->left,m,t);
    }
    if(root->right)
    {
        int t = hd+1;
        util(root->right,m,t);
    }
}

void printVertical(Node *root)
{
    if(!root)
        return;
    map<int,int>m;
    int hd=0;
    util(root,m,hd);
    for(auto i:m)
        cout<<i.second<<" ";
}



