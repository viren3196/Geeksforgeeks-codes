//Segregate even and odd nodes in a Linked List
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

struct node* list(int item, struct node* h1)
{
    if(h1==NULL)        // if oddlist is empty, make the current node as head node
    {
        h1 = (struct node*)malloc(sizeof(struct node));
        h1->data = item;
        h1->next = NULL;
        return h1;
    }

    struct node* tmp_head = h1;     // initial a temp node = head, since head will change

    while(h1->next!=NULL)           // traverse till the last node of the list
        h1 = h1->next;

    h1->next = (struct node*)malloc(sizeof(struct node));   // create a new node at the end of the list
    h1->next->data = item;                                  // and insert the new node at the end itself.
    h1->next->next = NULL;
    return tmp_head;
}

void display(struct node* h1)
{
    while(h1!=NULL)
    {
        cout<<h1->data<<" ";
        h1 = h1->next;
    }
}

int main()
 {
	int t,n,item;
        cin>>t;
        while(t--)
        {
            struct node* h1, *h2;
        	h1 = NULL;                      // head for odd list
        	h2 = NULL;                      // head for even list
            cin>>n;
            while(n--)
            {
                cin>>item;
                if(item%2)                  // checking the node is odd or even
                    h1 = list(item,h1);
                else
                    h2 = list(item,h2);
            }
            display(h2);                    //displaying the even nodes first
            display(h1);                    //then displaying odd nodes
            cout<<"\n";
        }
	return 0;
}
