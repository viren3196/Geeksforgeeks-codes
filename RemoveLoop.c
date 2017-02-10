/*The structure of linked list is the following
struct Node
{
int data;
Node* next; 
};*/

/*The function removes the loop from the linked list if present
You are required to complete this method*/

void removeLoop(Node* node, Node* fast)
{
    Node* temp = fast;
    while(node!=fast)
    {
        temp=fast;
        node=node->next;
        fast=fast->next;
    }
    temp->next = NULL;
}

void removeTheLoop(Node *node)
{
     Node *slow,*fast;
     slow=node,fast=node;
     int flag=0;
     
     while(fast)
     {
         if(slow==fast)
         {
            flag=1;
            break;
         }
         slow = slow->next;
         if(fast->next!=NULL)
            fast = fast->next->next;
         else 
            break;
     }
     if(flag)
        removeLoop(node,fast);
}

