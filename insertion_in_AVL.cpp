
Node* newNode(int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    temp->height = 1;
    return temp;
}

int height(Node* node)
{
    if(node==NULL)    
        return 0;
    return node->height;
}

int getbalance(Node* node)
{
    if(node==NULL)
        return 0;
    return height(node->left)-height(node->right);
}

Node* leftrotate(Node* node)
{
    Node* t1, *t2;
    t1 = node->right;
    t2 = t1->left;
    t1->left = node;
    node->right = t2;
    node->height = max(height(node->left),height(node->right))+1;
    t1->height = max(height(t1->left),height(t1->right))+1;
    return t1;
}

Node* rightrotate(Node* node)
{
    Node* t1, *t2;
    t1 = node->left;
    t2 = t1->right;
    t1->right = node;
    node->left = t2;
    node->height = max(height(node->left),height(node->right))+1;
    t1->height = max(height(t1->left),height(t1->right))+1;
    return t1;
}

Node* insertToAVL( Node* node, int data)
{
    if(node==NULL)
        return newNode(data);
    if(data>node->data)
        node->right = insertToAVL(node->right,data);
    else if(data<node->data)
        node->left = insertToAVL(node->left,data);
    else
        return node;
    
    node->height = max(height(node->left),height(node->right))+1;
    int balance = getbalance(node);
    
    if(balance>1 && data<node->left->data)   //LL
    {
        return rightrotate(node);
    }
    else if(balance<-1 && data>node->right->data)   //RR
    {
        return leftrotate(node);
    }
    else if(balance>1 && data>node->left->data)   //LR
    {
        node->left = leftrotate(node->left);
        return rightrotate(node);
    }
    else if(balance<-1 && data<node->right->data)   //RL
    {
        node->right = rightrotate(node->right);
        return leftrotate(node);
    }
    return node;
}





