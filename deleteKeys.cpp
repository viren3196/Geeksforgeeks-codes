//Delete keys in a Linked list

/* Link list Node
struct Node
{
    int data;
    Node* next;
};*/
/*You are required to complete below method*/
Node* deleteAllOccurances(Node *head,int x)
{
    if(!head)               // if head is null, return head
        return head;

    Node *t1, *t2;          // t1 points to current node, t2 points to next node
    t1 = head;
    while(t1->data == x)    // if head data is equal to key,
    {                       // keep deleting the head node.
        t2 = t1->next;
        free(t1);
        t1 = t2;            // everytime this loop executes,
    }                       // make next node as new head

    head = t1;

    while(t1)               // t1 is current node
    {
        t2 = t1->next;      // t2 is next node
        if(!t2)             // if t2 is NULL, break. since list is traversed.
            break;
        if(t2->data == x)   // if next node data equals key,
        {
            t1->next = t1->next->next; // make current node point next to next node
            free(t2);
        }
        else
        {
            t1 = t1->next;      // continous keys may exist,
        }                       // need not change pointer every time.
    }
    return head;
}
