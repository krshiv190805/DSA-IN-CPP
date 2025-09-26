/*(4:41)
in this we have to check whether the LL is palindromic or not
straight away we have to return true or false
approach:
first we will be using the stack and pushing each element and checking if head is equal to the top of the stack 
then it is a palindrome otherwise not
code for the above statement:


 code: 
 Node*reverseLinkedList(Node *head){
 if(head==NULL|| head->next==NULL) return head;
 Node*newHead=reverseLinkedList(head->next);
 Node*front=head->next;
 front->next=head;
 head->next=NULL;
 return newHead;
 }
 bool isPalindrome(Node* head){
 if(head==NULL|| head->next==NULL) return true;
 Node*slow=head;
 Node*fast=head;
 while(fast->next!=NULL && fast->next->next!=NULL){
 slow=slow->next;
 fast=fast->next->next;
 }
 Node*newHead=reverseLinkedList(slow->next);//the new head initially would be next of middle element(for even length)
 Node*first=head;
 Node*second=newHead;
 while(second!=NULL){
 if(first->data !=second->data){
 reverseLinkedList(newHead);
 return false;
 }
 first=first->next;
 second=second->next;
 }
 reverseLinkedList(newHead);
 return true;
 }
*/