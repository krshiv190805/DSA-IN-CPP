#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
  this is a job sequencing problem
    we have id for all the jobs(1 2 3 4)
    we have a deadline for each job for eg if it is 4 then you can do it on 
    the day 1 or 2 or 3 or 4 not on 5 
    deadline[]={4 1 1 1 }
    profit[]={40 10 40 30}
    now we have to maximize the profit
    
    also you have to make a class //Tc-O(NlogN+(N*max_deadline))
    Job{//SC-O(max_deadline)
    id,profit,deadline;
    }
    func(jobs arr[]){
    sort(arr,comparator);
    total_profit(0),count(0),max_deadline(-1);
    for(i=0-->n-1){
    max_deadline=max(maxdeadline,arr[i].deadline);
}
    hash[max_deadline+1]={-1};
    for(i=0->n-1){
    for(j=arr[i].deadline->0){//interview might tell you to optimise this and it can be done by disjoint set union(concept taught in graph)
    if(hash[j]==-1){
    count=count+1;
    hash[i]=arr[i].id;
    total_profit += arr[i].profit;
    break;
    }
    }
    }
    return count;
    }
    */
 return 0;
}