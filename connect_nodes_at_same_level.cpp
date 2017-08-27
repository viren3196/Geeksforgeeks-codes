/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */
// Should set the nextRight for all nodes
void connect(Node *p)
{
    if(!p)
        return;
    queue<Node*> q;
    q.push(p);
    while(!q.empty())
    {
        int cnt = q.size();
        while(cnt--)
        {
            Node* temp = q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            if(q.empty() || cnt==0)
                temp->nextRight = NULL;
            else
                temp->nextRight = q.front();
        }
    }
}

