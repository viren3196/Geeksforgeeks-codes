/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; */


/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
   
int findIntersect(Node* head1, Node* head2)
{
    while(head1!=NULL)
    {
        if(head1==head2)
            return head1->data;   
        else
        {
            head1=head1->next;
            head2=head2->next;
        }
    }
    return -1;
}
   
int countNodes(Node* head)
{
    int cnt=0;
    while(head!=NULL)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}
   
int intersectPoint(Node* head1, Node* head2)
{
    int cnt1=countNodes(head1);
    int cnt2=countNodes(head2);
    int d = abs(cnt1-cnt2);
    
    Node* temp = head1;
    Node* temp2 = head2;
    if(cnt1>cnt2)
    {
        while(d--)
            temp=temp->next;
    }
    else if(cnt2>cnt1)
    {
        while(d--)
            temp2=temp2->next;
    }
    return findIntersect(temp, temp2);
}
