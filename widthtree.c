/*  Structure of a Binary Tree
struct Node
{
    int data;
    Node* left, *right;
}; */

/* Function to get the maximum width of a binary tree*/
int getMaxWidth(Node* root)
{
   queue<Node*>q;
   if(root)
        q.push(root);

   int result=0, cnt;
   while(!q.empty())
   {
        cnt = q.size();
        result = max(result,cnt);
        while(cnt--)
        {
            Node* temp = q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
   }
   return result;
}
