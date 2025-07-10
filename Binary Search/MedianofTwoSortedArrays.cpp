/*
 in this question we have to find the median of two sorted arrays of different sizes
 eg 1:
 arr1[]={ 1 3 4 7 10 12} , arr2[]={ 2 3 6 15}
 first contains 6 element and second contain 4 elements
 so median we would be calculating : 
 approach 1: 
 after sorting the combined array if size is even
 we will be getting two elements as median but final answer would be avg of these two
 and if its odd the middle element would be our answer
 we will take another array and apply kind of merge sort
 and put the element in the new array according to less or greater 
 code: 
 double median(vector<int>&a,vector<int>&b){
 vector<int>arr3;
 int n1=a.size();
 int n2=b.size();
 int i=0,j=0;
 while(i<n1 && j<n2){
 if(a[i]<b[j]) arr3.push_back(a[i++]);
 else arr3.push_back(a[j++]);
 }
 while(i<n1) arr3.push_back(a[i++]);
 while(j<n2) arr3.push_back(a[j++]);
 int n=(n1+n2);
 if(n%2==1) return arr3[n/2];
 return (double)((double)(arr3[n/2])+(double)(arr3[n/2-1]))/2.0;
 }//TC-O(N) and so much space we are taking to store the third new array and then sorting and all

 approach 2:
 if n is even we know which element to take and same for odd n
 so now we will be checking arr[i]< or > arr[j] and increasing count variable which is initialised as 0
 code: 

 double median(vector<int>&a,vector<int>&b){
 int n1=a.size(),n2=b.size();
 int i=0,j=0;
 int n=(n1+n2);
 int ind2=n/2;
 int ind1=ind2-1;
 int cnt=0;
 int ind_1_el=-1(or INT_MIN),ind_2_el=-1(same as before);
 while(i<n1 && j<n2){
 if(a[i]<b[j]){
 if(cnt==ind1) ind_1_el=a[i];
 if(cnt==ind2) ind_2_el=a[i];
 cnt++;
 i++;
 }
 else{
 if(cnt==ind1) ind_1_el=b[j];
 if(cnt==ind2) ind_2_el=b[j];
 cnt++;
 j++;
 }
 }
 while(i<n1){
 if(cnt==ind1) ind1el=a[i];
 if(cnt==ind2) ind2el=a[i];
 cnt++;
 i++;
 }
 while(j<n2){
 if(cnt==ind1) ind1el=b[j];
 if(cnt==ind2) ind2el=b[j];
 cnt++;
 j++;
 }
 if(n%2==1) return ind2el;
 return (double)((double)(ind1el+ind2el))/2.0;
}//TC-
*/