#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n){//worst time complexity is O(n^2) and best time complexity is O(n).
        for(int i=0;i<=n-2;i++){
            int min_index=i;
            for(int j=i;j<=n-1;j++){
                if(arr[j]<arr[min_index]){
                    min_index=j;
                }
            }
            int temp=arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;

        }
    }
    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        selection_sort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
 return 0;
}