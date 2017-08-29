/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
};
*/

struct node* findIntersection(struct node* head1, struct node* head2)
{
    map<struct node*, int>mp;
    while(head1)
    {
        mp[head1]++;
        head1 = head1->next;
    }
    while(head2)
    {
        mp[head2]++;
        head2 = head2->next;
    }
    int flag=0;
    struct node* ans, *temp;    
    ans = NULL;
    for(auto i:mp)
    {
        if(i.second==1)
        {
            cout<<i.first->data;
            if(flag==0)
            {
                ans = (struct node*)malloc(sizeof(struct node));
                ans->data = i.first->data;
                ans->next = NULL;
                temp = ans;
            }
            else
            {
                struct node* add = (struct node*)malloc(sizeof(struct node));
                add->data = i.first->data;
                add->next = NULL;
                temp->next = add;
                temp = add;
            }
            flag=1;
        }
    }
    return ans;
}













