void printSpiral(Node *root)
{
    if(!root)
        return;
    queue<Node*>q;
    q.push(root);
    int flag=0;
    while(!q.empty())
    {
        int cnt=q.size();
        while(cnt--)
        {
            Node* temp = q.front();
            q.pop();
            cout<<temp->data<<" ";
            if(flag==0)
            {
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            else
            {
                if(temp->right)
                    q.push(temp->right);
                if(temp->left)
                    q.push(temp->left);
            }
        }
        if(flag)
            flag=0;
        else
            flag=1;
    }
}




