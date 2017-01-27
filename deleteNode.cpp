//Delete a Node in Single Linked List

/* Link list Node
struct Node
{
    int data;
    Node* next;
};*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    if(!head)
        return head;

    Node* t1, *t2;
    int cnt = 1;

    if(cnt == x)
    {
        t1 = head;
        head = head->next;
        free(t1);
        return head;
    }

    cnt++;
    t1 = head;
    while(t1)
    {
        t2 = t1->next;
        if(cnt==x)
        {
            t1->next = t2->next;
            free(t2);
            return head;
        }
        t1 = t1->next;
        cnt++;
    }
}
