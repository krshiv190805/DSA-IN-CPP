/*
 in this question we have to remove the Nth from end of LL
 like eg:
 1->2->3->4->5->null and N=2
 approach:
 we can observe that it is 3rd from start which is 2nd from back
 so we can first check if N!=5 , so first we have to write edge case for N=5
 like we can count the length nd and make res=cnt-N
 and then the link of the node which is just before the node being deleted
 next should point to deleted node Next

 code:
 cnt=0,temp=head;
 while(temp!=null){//O(length)
 cnt++;
 temp=temp->next;
 }
 if(cnt==N){
  newHead=head->next;//if it is equal to N then it says to delete the original head
  free(head);
  return newHead;
  }
 result=cnt-N,temp=head;
 while(temp!=NULL){ //O(length-N)
 res--;
 if(res==0) break;
 temp=temp->next;
 }
 delNode=temp->next;
 temp->next=temp->next->next;
 delete(temp);
 return head; //O(length)+ O(length-N) as TC and it can go to O(2*length) as worst case and SC-O(1)

 approach 2:
 to reduce the complexity we can do better from 2*length to simply length

 first we will use fast and slow pointers , initially fast is send to Nth Node starting from 0,
 and then start moving fast and slow pointers simultaneously by 1 step each

 code:
 Node* removeKthNode(Node * head,int k){
 Node* fast=head;
 Node*slow=head;
 for(int i=0;i<k;i++) fast=fast->next;
 if(fast==NULL) return head->next;
 while(fast->next!=NULL){ //TC-O(length) and SC-O(1)
  fast=fast->next;
  slow=slow->next;
 }
  Node* delNode=slow->next;
  slow->next=slow->next->next;
  free(delNode); //basically delete
  return head;
 }
 */