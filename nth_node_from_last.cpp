/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* struct Node
 {
   int data;
   Node* next;
 }; */
/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node *head, int n)
{
      Node* temp, *ans;
      ans = temp = head;
      while(n--)
      {
            if(temp==NULL)          
                return -1;
            temp = temp->next;
      }
      while(temp)
      {
          temp = temp->next;
          ans = ans->next;
      }
      return ans->data;
}
