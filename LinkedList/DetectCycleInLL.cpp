/*
in this question we have to detect whethr there is a cycle or not
just return true or false
approach 1:
we will using a hashmap so that while traversing
we can keep a track that if a particular node is being traversed twice
then it is a cycle there(true) else false
pseudo code:
 map<Node*,int>mpp;
 temp=head;
 while(temp!=null){
 if(mpp.find(temp)==true) return true;
 mpp[temp]=1;
 mpp.put({temp,1});
 temp=temp->next;//TC-O(N*2*logN) , N is for while loop and insertion and finding in map takes logN so twice it will be there
 }//SC-O(N) we are storing all the node and 1 as visited in hashmap so N would be used

 approach 2:
 we will be using tortoise-hare(/slow and fast) method to optimise time and space
 we will just check if at any point slow==fast then return true 
 else false
 code: //TC-O(N) and SC-O(1)
  bool detectCycle(Node*head){
  Node* slow=head;
  Node* fast=head;
  while(fast!=NULL && fast->next!=NULL){
  slow=slow->next;
  fast=fast->next->next;
  if(slow==fast) return true;
  }
  return false;
  }
*/