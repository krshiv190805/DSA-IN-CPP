/*
 in this question we will be adding 1 to a number and then we have to represent the number as
 a linked list, u will be initially given with a LL
 for eg: 
 1->5->9 , after adding 1 it will become 160
 so to represent we will write like this 1->6->0
 approach:
 first we will be reversing the linked list so that we can directly add 1 to the last digit of the number
 and then again will reverse at the end of the code
 and return the new head

 IMP: this will end up taking TC-O(3N) and SC-O(1)
 now code:
  func(head){
  head=reverse(head);//reverse functions is mentioned in previous video,TC-O(N)
  temp=head,carry=1;
  while(temp){//O(N)
   temp.data=temp.data+carry;
   if(temp->data<10){
    carry=0;
    break;
   }
    else {
    temp->data=0;
    carry=1;
    }
    temp=temp.next;
   }
    if(carry==1){
    Node newNode=new Node(1);
    head=reverse(head);
    newNode->next=head;
    return newNode;
    }
    head=reverse(head); //O(N)
    return head;
  }

  approach 2(optimised for time):
  this is an approach in which we will be using recursion as
  to access the last element without reversing it , can only be done by backtracking

  TC-O(N) and SC-O(N)
  code:
  int addHelper(Node * temp){
  if(temp==NULL) return 1;
  int carry=addHelper(temp->next);
  temp->data+=carry;
  if(temp->data<10) return 0;
  temp->data=0;
  return 1;
  }
  Node* addOne(Node*head){
  int carry=addHelper(head);
  if(carry==1){
  Node*newNode=new Node(1);
  newNode->next=head;
  head=newNode;
  }
  return head;
  }
*/