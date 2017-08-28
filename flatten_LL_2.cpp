/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Node structure  used in the program
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom ;
}; */
/*  Function which returns the  root of 
    the flattened linked list. */
    
Node* merge(Node* a, Node* b)
{
    if(!a)
        return b;
    if(!b)
        return a;
    Node* r;
    if(a->data<b->data)
    {
        r = a;
        r->bottom = merge(a->bottom,b);
    }
    else
    {
        r = b;
        r->bottom = merge(a,b->bottom);
    }
    return r;
}

Node *flatten(Node *root)
{
    if(!root||!root->next)
        return root;
    return merge(root,flatten(root->next));
}




