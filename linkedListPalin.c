/*The structure of the Node is
struct Node
{
    int data;
    struct Node* next;
};*/

/*You are required to complete this method */

int findmid(Node* head)
{
    int cnt=0;
    while(head)
    {
        cnt++;
        head = head->next;
    }
    if(cnt%2)
        return cnt/2+2;
    return cnt/2+1;
}

Node* reverse(Node* head, int mid)
{
    int cnt = 1;
    Node* prev, *curr, *later;
    prev = NULL;
    curr = head;
    while(cnt != mid)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    later = curr->next;

    while(curr->next!=NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = later;
        later = later->next;
    }

    curr->next = prev;

    return curr;
}

bool checkPalindrome(Node* head, Node* tail)
{
    while(head->data == tail->data)
    {
        if(head==tail || head->next == tail)
            return 1;
        head = head->next;
        tail = tail->next;
    }
    return 0;
}

bool isPalindrome(Node *head)
{
    if(head->next == NULL)
        return 1;
    int mid = findmid(head);
    Node* tail = reverse(head,mid);
    return checkPalindrome(head,tail);
}
