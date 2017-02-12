/*struct Node
{
    int data;
   Node* next;
}; */
//write a function returns the resultant linked list
Node*  addTwoLists(Node* first, Node* second){
  
  int sum,carry=0,flag=0;
  Node* head=first;
  do
  {
      if(flag)
      {
          first=first->next;
          second=second->next;
      }
      sum = first->data + second->data + carry;
      first->data = sum%10;
      carry = sum/10;
      flag=1;
  }while(first->next!=NULL && second->next!=NULL);
  
  if(first->next==NULL && second->next==NULL)
        ;
  else if(first->next==NULL)
  {
      first->next = second->next;
      while(second->next!=NULL && carry)
      {
          second = second->next;
          second->data += carry
          carry = second->data/10;
      }
      first = second;
  }
  else
  {
      while(first->next!=NULL && carry)
      {
          first = first->next;
          first->data += carry
          carry = first->data/10;
      }
      first->next->data += carry;
  }
  
  if(carry)
  {
      Node* last = new Node();
      last->data = carry;
      last->next = NULL;
      first->next = last;
  }
  return head;
}
