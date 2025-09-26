/*
in this we have to just return the lenght of the loop
we will use the same two approaches we used in the last problem which was detection of cycle
approach 1: 
hashmap to store visited and then keeping count track 
and then increasing it 
we will be keeping temp on head then moving it till it not 
reach the starting head node of the cycle
then subtracting the temp and node count wil give us the result
code:
 map<node,int>mpp,temp=head,timer=1;
 while(temp!=NULL){
 if(mpp.find(temp)==true){
 value=mpp[temp];
 return (timer-value);
 }
 mpp[temp]=timer;
 timer++;
 temp=temp->next;
 }
 return 0;//TC-O(N*2*logN) same as of previous one
 //SC-O(N) for storing all the nodes

 approach 2: 
 slow and fast method 
 same while(slow!=fast) keep on increasing both and then keep a count also
 code:
 int findLength(Node*slow,Node*fast){
 int cnt=1;
 fast=fast->next;
 while(slow!=fast){
 cnt++;
 fast=fast->next;
 }
 return cnt;
 }
 int lengthOfLOOP(Node*head){
 Node*slow=head;
 Node*fast=head;
 While(fast!=NULL && fast->next!=NULL){
 slow=slow->next;
 fast=fast->next->next;
 if(slow==fast) return findLength(slow,fast);
 }
 return 0;//TC-O(N) and SC-O(1)
 }
*/