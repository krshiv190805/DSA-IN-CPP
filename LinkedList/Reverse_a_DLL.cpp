/*
in this we have to reverse a doubly linked list 
now we will be thinking on multiple approaches
1)we will be pushing each node intio the stack in opposite manner
and then printing it , like
4-2-3-1 so in stack(LIFO) it would be 
1
3
2
4
so after reversing it 
1-3-2-4
pseudo code:
Node*temp=head,stack<int>st;
while(temp!=NULL){//TC-O(N)
 st.push(temp->data);
 temp=temp->next;
 }
 temp=head;
 while(temp!=NULL){//TC-O(N), so TC-O(2N) and SC-O(N) for using the stack space
 temp->data=st.top();
 st.top();
 temp=temp->next;
 }

 2) our next approach would be swapping the links betweeen them as node can't be swapped
 if we just swap nodes using the swap function then links between them will be destroyed

 we have to actually do 
 data(node)==current(initially)
 current->next=last(initially back of node)
 current->prev=front(initially front of node)

 psuedo code will look like:
 last=current->back;
 current->back=current->next;
 current->next=last;
 IMP: don't every write the pseudo code in the interview
 use final code and tell the interviewer about the thought process 
 like first you thought about swapping 2 nodes and then how u proceeded 

 code:
 Node*reverseDLL(Node*head){
 if(head==null || head->next=NULL) return head;
 Node*prev=NULL;
 Node*current=head;
 while(current!=NULL){
 prev=current->prev;
 current->prev=current->next;
 current->next=prev;
 current=current->prev;
 }
 return prev->prev;
 }//TC-O(N) and SC-O(1)
*/