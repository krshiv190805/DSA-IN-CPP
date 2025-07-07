//list<int>ls;
ls.push_back(1);//means ls={1}
ls.emplace_back(2);//means ls={1,2}
ls.push_front(3);//means ls={3,1,2}, insert is very slow in vector but in list it is very fast that's why we are using it
ls.emplace_front(2);//means 2 will be removed from the very first from the vector
//deque<int>dq; same functions as above one but it is faster than list
//stack , LIFO->last in first out , which goes at last comes out first and u can't access it like an array with index that's what a stack means,only three functions are 
//there in stack push,pop,top, st.pop() will remove the top element of the stack
//st.top() will give the top element of the stack
//st.size() will give the size of the stack
//stack<int>st1;
//st1.swap(st2);->swapping of two stacks 
//queue<int>q; FIFO->first in first out , which goes in first comes out first
//q.push(1);->inserts 1 in the queue, q.push(2);->inserts 2 in the queue, q.emplace(4);->inserts 4 in the queue,q.back()+=5 will make 4 as 9;q.back() will print 9
//Q.front() will print 1,q.pop() will remove 1 from the queue(deletes first element);and now q.front() will print 2
/* priority_queue<int>pq; add the elements which is lexicographically big , like suppose first we push 2 then 8 then 5 , so it wil
 arrange 2 then 5 then 8 in the queue acc. to priority
 push works in logn,top in big_oh(1) and pop in again logn
 priority_queue<int , vector<int>,greater<int>>pq;
 pq.push(5);pq.push(2),pq.top() will give you the first element at the top which is 2 in this case
 set<int>st, set.insert(2),set.insert(3),set.emplace(2) will not add another 2 , entry should be unique 
 {1,2,3,4,5}-> if you access {auto it = st.find(3)} this will iterate at the address where 3 is stored and if you want to access which is not present 
 then it will go to st.end() means pointing after the last element of the array 
 u  use erase like this st.erase(it) to erase an element from iterator becuase this take constant time 
 arr example{1,2,3,4,5} 
 auto it1 =st.find(2), auto it2 = st.find(4), and now u do st.erase(it1,it2) then it deletes from second element to element before 4th element// List operations
ls.push_back(1); // Add element to the end of the list
ls.emplace_back(2); // Add element to the end of the list
ls.push_front(3); // Add element to the beginning of the list
ls.emplace_front(2); // Add element to the beginning of the list
insertion and erasing takes log N base 2 , time complexity
in multiset , it store all repetitive elements , not the unique
one and in sorted manner
if suppose i add 1,1,1 then it contains three 1 
but catch is if I erase(1) then all the 1's are deleted
if i use find(1) then it will find 1 from the set
and if I just want to delete the starting two 1's then 
write find(1),find(1)+2 then it will delete only first two 1's
generally time complexity is O(1) and in the worst's worst case it is O(N) otherwise not
in unordered set, it stores every unique element but in ordered manner(basically unsorted)
in MAP; there is a KEY and a value(works in log N time comp.)
like we defien map<int,int>mpp;
mpp[1]=2;  (same as below)
mpp.emplace({3,1}); (same as below)
mpp.insert({2,4}); (it add in the map)
Remember Map stores unique elements in sorted order similar like set data structure
you can also write for(auto it : mpp) and then cout as per needs(it.first,it.second)
if you want to access mpp[1] means value at 1 it will tell whatever is stored at it , else if nothing is stored it will show null or 0;
other way to access is *(it).numbered index , * gives you key and number written after dot gives you value at that key
In Multimap;duplicate keys are there , and in sorted manner
and In unorderedMap , there are no duplicate keys but unique keys not in sorted manner(works in O(1) T.C.)
IMPORTANT:
to sort we use sort(a,a+n); {1,5,3,2}->{1,2,3,5} here we write a,a+4 where a+4 points after the last element
u can also sort it partially by writing sort(a+2,a+4);
and if you want to sort in non increasing order then the code goes like:
sort(a,a+n,greater<int>);
IMP_NOTE:
bool comp(pair<int,int>p1,pair<int,int>p2){
if(p1.second<p2.second) return true;
if(p1.second>p2.second) return false;
//if they are same
if(p1.first>p2.first) return true;
return false;
}
pair<int,int>a[]={{1,2},{2,1},{4,1}};
(sort it according to second element)
(if second element is same,then sort)
(if according to first element but in descending) 
and now u can write sort(a,a+n,comp);


