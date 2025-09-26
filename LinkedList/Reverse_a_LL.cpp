/*
in this question we have to reverse a Linked List
 approach 1:
 first we will use a stack and then one by one we will keep pushing node into the stack
 and again we will remove from the top and it will form a new node and then new connection and so on
 it will take in total of O(2N) TC and O(N) SC

 code : 
 temp=head,stack<int>st;
 while(temp!=NULL){ //O(N)
 st.push(temp->data);
 temp=temp->next;
 }
 temp=head;
 while(temp!=NULL){//O(N), O(N) space for stack storing all the nodes
 temp->data=st.top();
 st.pop();
 temp=temp->next;
 }

 approach 2:
 this is an iterative approach 
 in this we are doing this by observation, like checking the node and then putting its link from next to backwards and all
 using some extra pointers

 code:
 Node * reverseLinkedList(Node*head){ //TC-O(N) and SC-O(1)
 Node*temp=head;
 Node*prev=NULL;
 while(temp!=NULL){
  Node*front=temp->next;
  temp->next=prev;
  prev=temp;
  temp=front;
 }
  return prev;
 }

 approach 3:
 we will use recursion to break into small parts like
 one node - 2 node and so on,

 code:
 Node * reverseLL(Node * head){
 if(head==NULL || head->next==NULL) return head;
 Node* newHead=reverseLL(head->next);
 Node* front=head->next;
 front->next=head;
 head->next=NULL;
 return newHead; //TC-O(N) as u are doing N recursive calls and SC-O(N) is for recursive stack space
 }
*/