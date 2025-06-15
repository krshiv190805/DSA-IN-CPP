#include <bits/stdc++.h>
using namespace std;
void explainvector()//if we dont know the size of the array then we use vector , since it is dynamic in nature that's why we are using in this
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(5);
    /*push_back brings 1(add 1 in the array) in and emplace_back add 5 as the next element ,
 benfit of vector is it is not like C language
 and it can dynamically change size of array*/
 vector<pair<int,int>>vec;
 vec.push_back({1,2});//add this in the main array , use curly braces to add the pair
 vec.emplace_back(1,2);//takes as an array,not curly braces it already assume it as pair and take as input
 vector<int>v(5,100);
//  vector of size 5 and all elements are 100 
  vector<int>v(5);
//   vector of size 5 and all elements are 0 or maye be some garbage value depending upon the compiler
vector<int>:: iterator it=v.begin();
// it is a pointer to the first element of the vector
it++;
cout<<*(it)<<" ";
//v.pop_back()- removes last element from the vector or array
//v.clear()=use to remove all the elements of the vector making the size of vector to be 0
//pair<int,int>p={1,2};
//cout<<p.first<<" "<<p.second;
//pair<int , int >arr[]={{1,2},{2,3},{3,4}};
//cout<<arr[1].first<<" "<<arr[2].second; -> prints 2 and 4
vector<int>v1(5,20);
vector<int>v2(v1);//copy of v1
vector<int>:: iterator it=v1.begin();//pointer to the first element of the vector
it++;
cout<<*(it)<<" ";//this will print the value which is present at the address pointed by it
v.end();//points to one more than the last element of the vector
// if you want to print the just before vector do i--;
//we will not use these two operators in the vector
//v.rend() means reverse end so it will point before the first element of the vector
//v.rbegin() means reverse begin so it will point to the last element of the vector,if you do it++ then it will point to the element before the last element
//v.back() will give the last element of the vector
//for(vector<int>::iterator it=v.begin();it!=v.end();it++){
//cout<<*(it)<<" ";} u can use this can replace the for loop
//auto it=v.begin();->it will automatically detect the type of the iterator, if you write auto a=5 it automatically detecs the type of thing we have entered (now its integer)
// {10,20,30,40} if you use v.erase(v.begin()+2) then it will remove 30 from the vector
// if you want to erase a full segment then use v.erase(v.begin()+1,v.begin()+3) then it will remove 20 and 30 from the vector
//v.insert(v.begin()+1,100);->insert 100 at the 1st index of the vector{10,20,30}->{10,100,20,30}
//v.insert(v.begin()+1,2,100);->insert 100 two times at the 1st index of the vector{10,20,30}->{10,100,100,20,30}
//first is where you want to insert , second is how many times u wanna insert and third is what you want to insert
//vector<int>copy(2,50); not much needed but if you write v.insert (v.begin(),copy.begin(),copy.end());then it will insert 50 two times at the beginning of the vector
//v.swap(v1);-> now v1 is v vector and v is v1 basically swapping whole vectors instead of elements
}