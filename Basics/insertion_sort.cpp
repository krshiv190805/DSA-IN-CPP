#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){//worst time complexity will be O(n^2) and best will be O(n).
    for(int i=0;i<=n-1;i++){
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
        cout<<"nums\n";//this will tell us how many time swap is being done in the process by printing
    }
    }
}
 int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        insertion_sort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
 return 0;
}