/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


//Structure of binary tree
/*struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};*/
// function should print the topView of the binary tree
/*
void toplevel(unordered_map<int,int>&m, Node* root, int hd)
{
    if(!m[hd])
    {
        m[hd] = root->data;
        cout<<root->data<<" ";
    }
    if(root->left)
    {
        int t1 = hd-1;
        toplevel(m,root->left,t1);
    }
    if(root->right)
    {
        int t2 = hd+1;
        toplevel(m,root->right,t2);
    }
}
*/
void topView(struct Node *root)
{
    if(!root)
        return;
    map<int,int>mp;
    queue<pair<Node*,int> >q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<Node*,int>temp = q.front();
        q.pop();
        int i = temp.second;
        if(!mp[i])
        {
            cout<<temp.first->data<<" ";
            mp[i] = 1; 
        }
        Node* x = temp.first;
        if(x->left)
            q.push(make_pair(x->left,i-1));
        if(x->right)
            q.push(make_pair(x->right,i+1));
    }
    /*
    if(!root)
        return;
    unordered_map<int,int>m;
    int hd=0;
    toplevel(m,root,hd);
    
    for(auto i:m)
        cout<<i.second<<" ";
    
    cout<<m[0]<<" ";
    int i=-1,j=1;
    while(1)
    {
        if(m[i])
            cout<<m[i--]<<" ";
        if(m[j])
            cout<<m[j++]<<" ";
        if(!m[i] && !m[j])
            break;
    }
    */
}










