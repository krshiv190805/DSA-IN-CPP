#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    pop(){  // time complexity is O(1) and size is O(size)
    if(currsize==0)
    element=q[start];
    if(currsize==1){
    start=end=-1;
    }
    else start=(start+1)%size;
    currsize-=1;
    return element;
    }
    top(){
    if(cursize==0) ;
    else return q[start];
    }


    2) stack using LL
    if we have to pop the top element then 
    temp=top;
    top=top->next;
    delete temp;
    //basic operations of stack using linked list
    class Stack{  //time complexity is O(1) and size is less than the above one as i am using only that much size which is needed at the time for pushing the element
    Node*top;size=0;// that's why it is better to use this 
    push(x){
    Node*temp=new Node(x);
    temp->next=top;
    top=temp;
    size=size+1;
    }
    pop(){
    Node*temp=top;
    top=top->next;
    delete temp;
    size=size-1;
    }
    top(){
    return top->data;
    }
    size(){
    return size;
    }
    }
    3)Queue using LL  
    class Queue{//time complexity would be O(1)
    Node*start,end;
    size=0;
    push(x){
    Node*temp=new Node(x);
    if(start==NULL){
    start=end=temp;
    }
    else end->next=temp;
    size+=1;
    }
    pop(){
    if(start==null) ;
    temp=start;
    start=start->next;
    delete temp;
    size-=1;
    }
    top(){
    if(start==null)
    return start->val;
    }
    }

    4)implementation of stack using queue 
    like all the operations will be like we do in the queue
    first we push 4 then 9 so it will be 4,9 and if i ask you to give me the top element it 
    will give 4 instead of 9 since in stack top element is LIFO and queue FIFO
    class Stack{//TIME Complexity for push is O(N) and size is O(1)
    queue<int>q;
    push(x)
    {
    s=q.size();
    q.push(x);
    for(int i=1->s){
    q.push(q.top());
    q.pop();
    }
    }
    pop(){
    q.pop();
    }
    top(){
    return q.top();
    }
    }
    5) Implementation of Queue using Stack
    class Queue{
    stack<int>s1,s2;
    push(x){
    while(s1.size()){//TC-O(2N)
    s2.push(s1.top());
    s1.pop();
    }
]
    s1.push(x);
    while(s2.size()){
    s1.push(s2.top());
    s2.pop();
    }
    top(){
    s1.top();
    }
    pop(){
    s1.pop();
    }
    }

    part-2(approach 2)
   class Queue{//time complexity for pop() is O(1)
   Stack<int>s1,s2;
   push(x);
   s1.push(x);
   pop(){
   if(s2.empty!=0) s2.pop;
   else 
   while(s1.size()){
   s2.push(s1.top());
   s1.pop();
}
   s2.pop();
   }
   top(){
   if(s2.empty!=0) return s2.top();
   else while(s1.size()){
   s2.push(s1.top);
   s1.pop();
   }
   return s2.top();
   }
   }   
    */
 return 0;
}