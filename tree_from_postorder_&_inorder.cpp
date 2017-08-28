
int search(Node* root,int in[],int start,int end)
{
    int i;
    for( i=start ; i<=end ; i++)    
        if(in[i]==root->data)
            return i;
    return -1;
            
}

Node* newNod(int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node* build(Node* root, int in[], int post[], int start, int end, int &pindex)
{
    if(start>end)
        return NULL;
    root = newNod(post[pindex--]);
    if(start == end)
        return root;
    int partition = search(root,in,start,end);
    root->right = build(root,in,post,partition+1,end,pindex);
    root->left = build(root,in,post,start,partition-1,pindex);
    return root;
}

Node *buildTree(int in[], int post[], int n)
{
    if(n==0)
        return NULL;
    Node* root = NULL;
    int pindex = n-1;
    root = build(root,in,post,0,n-1,pindex);
    return root;
}
