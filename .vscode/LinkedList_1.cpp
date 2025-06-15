#include<bits/stdc++.h>
using namespace std;
/* linked list is soemthing like list but not in contiguous location just like array 
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
