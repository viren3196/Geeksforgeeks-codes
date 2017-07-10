/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
  }
*/

// Should reverse list and return new head.
Node* reverse(Node *head)
{
    Node* prev, *curr, *next;
    prev = NULL;
    curr = head;
    next = head->next;

    while(curr!=NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = next;
        if(curr)
            next = next->next;
    }
    return prev;
}
