#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    this is the question in which we have to find the missing number 
    and number in the array will be given from 1 to N and
    also you would be given N in the first(N=size of the array)
    and you have to find which number is not there in the array
    from 1 to N
    basic approach is find sum from 1 to N by N(N+1)/2
    and then subtract the sum of elements in the array
    from this sum 
    by hashing we can reduce the TC from N*N to 2*O(N)
    hash[n+1]={0};
    for(i=0;i<n;i++){
    hash[arr[i]]=1;
    }
    for(i=1->n){
    if(hash[i]==0) return i; //TC-O(N)+O(N)
    }//SC-O(N)

    also we can do by XOR operator 
    we will always perfer Xor operator as the sum method would not 
    be possible if N=10^5 so N(N+1)/2 would be somewhere]
    10^10 so you have to store this in some long int
    so it will take a little extra space to store this rather than
    the XOR operator
    code:
    A^A=0
    0^A=A
    int missingNum(vector<int>&a,int N){
    int xor1=0;int xor2=0;
    int n=N-1;
    for(int i=0;i<n;i++){
    xor2=xor2^a[i];
    xor1=xor1^(i+1);
    }
    return xor1^xor2;
    }
    */
 return 0;
 
}