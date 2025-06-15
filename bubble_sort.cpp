#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){//worst time complexity will be O(n^2) and best will be O(n).
    for(int i=n-1;i>=1;i--){
        int nums_swap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                nums_swap=1;
            }
        }
        if(nums_swap==0){
            break;
        }
cout<<"nums\n"<<endl;// this will tell us how many time swap is being done in the process by printing 

}
}
 int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bubble_sort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
 return 0;
}