/*
in this question we have to sum up the current data and print it as a new list
it will be given in opposite manner 
like eg:
3-4-2-1 is actually a number 1234
so if we want to add two numbers we have to develop a logic
approach:
we will use a dummy node initialised with -1 and then try to add both LL's head value and
if its not null then we will keep moving until it doesnt become 
and finally we will also keep one carry variable to check and update if there is a 9+1 thing 
then its carry of 1 it will be present as a new node in the final answer

code:
  func(head1 , head2){
  t1=head,t2=head;
  dummyNode=new Node(-1), curr=dummyNode
  while(t1!=NULL || t2!=NULL){
  //further will be continued as code below
  }
  }
  Node*addTwoNum(Node*num1,Node*num2){//TC-O(max(N1,N2)) and SC-will be same as of TC
  Node*dummyHead=new Node(-1);
  Node*curr=dummyHead;
  Node*temp1=num1;
  Node*temp2=num2;
  int carry=0;
  while(temp1!=NULL || temp2!=NULL){
  int sum=carry;
  if(temp1) sum+=temp1->data;
  if(temp2) sum+=temp2->data
  Node*newNode=new Node(sum%10);
  carry=sum/10;
  curr->next=newNode;
  curr=curr->next;
  if(temp1) temp1=temp1->next;
  if(temp2) temp2=temp2->next;
  }
  if(carry){
  Node*newNode=new Node(carry);
  curr->next=newNode;
  }
  return dummyHead->next; // this will be our new head
  }
*/