/*The structure of linked list is the following
struct node
{
int data;
Node* next;
};*/

int detectloop(Node *list)
{
    Node* list2 = list;
    while(list2 && list2->next)
    {
        list = list->next;
        list2 = list2->next->next;
        if(list == list2)
            return 1;
    }
    return 0;
}
