/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */


/* Should print vertical order such that each vertical line
   is separated by $ */

void printOrder(Node* root, map<int,vector<int> >&m, int cnt)
{
    if(root==NULL)
        return;
    m[cnt].push_back(root->data);
    printOrder(root->left,m,cnt-1);
    printOrder(root->right,m,cnt+1);
}

void verticalOrder(Node *root)
{
    map<int,vector<int> > m;
    int cnt=0;
    printOrder(root,m,cnt);
    for(auto i=m.begin() ; i!=m.end() ; i++)
    {
        for(int j=0 ; j<i->second.size() ; j++)
            cout<<i->second[j]<<" ";
        cout<<"$";
    }
}
