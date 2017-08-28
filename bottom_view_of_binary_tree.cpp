/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Tree node class
struct Node
{
    int data; 
    Node *left, *right; 
}; */
// Method that prints the bottom view.
void bottomlevel(map<int,int>&m, Node* root, int& hd)
{
    m[hd] = root->data;
    if(root->left)
    {
        int t1 = hd-1;
        bottomlevel(m,root->left,t1);
    }
    if(root->right)
    {
        int t2 = hd+1;
        bottomlevel(m,root->right,t2);
    }
}

void bottomView(Node *root)
{
   if(!root)
        return;
   map<int,int>m;
   int hd=0;
   bottomlevel(m,root,hd);
   for(auto i:m)
        cout<<i.second<<" ";
}

