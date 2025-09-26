#include<bits/stdc++.h>
using namespace std;
/* linked list is something like list but not in contiguous location just like array 
which stores every members of it in contiguous location , one after other
if you add new element after you have added one before , it will find a location in head memory
and store it in that
*/
struct Node{
    public:
    int data;
    Node*next;
    Node(data1 ,Node*next1){//Node x=Node(2,nullptr) initialise a node like this
        data=data1;
        next=next1;
    }
}//Node*(name of your variable)=new Node(2,nullptr)
/*
 we will be converting an array to LL
  before the full code we will be writing the constructor for data as well as the next pointer
  and remember in the constructor it is Node* next1

  Node* convertarr2LL(vector<int>&arr){ //pass by reference
  Node*head=new Node(arr[0]);
  Node*mover=head;
  for(int i=1;i<arr.size();i++){
  Node*temp=new Node(arr[i]);
  mover->next=temp; // pointing to the temp va
  mover=temp;//further we are moving move pointer to get to the end of the array 
  }
  return head;
  }
  int main(){
  vector<int> arr={12,5,8,7};
  Node*head=convertarr2LL(arr);
  cout<<head->data; //will print 12 as head
  }

  //deleting the head
  Node*removeHead(Node*head){
  if(head==NULL) return head;
  Node*temp=head;
  head=head->next;
  delete temp;// will delete the temp and further returning the head
  return head;
  }
  //deleting the tail
  Node*deleteTail(Node*head){
  if(head==NULL) return head;
  Node*temp=head;
  while(temp->next->next!=NULL){
  temp=temp->next;
  }
  delete(temp->next);
  temp->next=nullptr;
  return head;
  }
  //deleting Kth element of the LL
  Node*removeK(Node*head,int K){
  if(head==NULL) return head;
  if(k==1){
  Node*temp=head;
  head->next;
  free(temp);
  return head;
  }
  int cnt=0;
  Node*temp=head;
  Node*prev=NULL;
  while(temp!=NULL){
  cnt++;
  if(cnt==k){
  prev->next=prev->next->next;
  free(temp);
  break;
  }
  prev=temp;
  temp=temp->next;
  }
  return head; // will return the head, Kth element is what we have to delete
  }
  //delete the node with value x  
  just make temp->data=val or head->data =val , it will work perfectly

  //insertion at the head
  we can directly head= ( return new Node(val,head));

  //insertion at the tail 
  Node*insert_at_Tail(Node*head,int val){
  if(head==NULL) return new Node(val);
  Node*temp=head;
  while(temp->next!=NULL){
  temp=temp->next;
  }
  Node* newNode=new Node(val);
  temp->next=newNode;
  return head;
  }

  //insertion at the Kth position
*/
