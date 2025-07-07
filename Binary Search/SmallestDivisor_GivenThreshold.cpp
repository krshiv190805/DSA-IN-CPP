/*
  in this question we have to find a number which when divided by each element and the answer should give a 
  sum<=threshold value
  let me explain it more clearly
  arr[]={1 2 5 9} threshold is 6
  now every element is suppose , you divide by 4 and after dividing
  each element take the ceil value 
  1/4=0.25 but we will take 1 
  and for each element present in the array we would be 
  doing the same
  now we have to find the min divisor
  brute approach :
  we will check the sum will be lying from 1 to size of array
  as min divisor can't be lesser than 1
  and maximum it can't go greater than the max element in array
  it can go but it's of no use answer would be same
  code: 
  for(div=1->max(arr)){//TC-O(max_element*N) and SC-O(1)
  sum=0;
  for(i=0->n-1){
  sum+=ceil(arr[i]/div);
  }
  if(sum<=threshold) return d;
  }
  return -1;//if not found

  now the optimal approach:
  we will use binary search to do this
  we can the answer will be lying in 1 to n
  so we can optimise by reducing the search space
  first we can first min element which is suitable and then the right space would be 
  eliminated as all will be satisfied but larger, as we want min 
  divisor
  code:
  int sumByD(vector<int>&arr,int div){
  int sum=0;
  int n=arr.size();
  for(int i=0;i<n;i++){
  sum=sum+ceil((double)(arr[i])/(double)(div));
  }
  return sum;
  }
  int smallestDivisor(vector<int>&arr,int limit){//TC-O(log(max)base 2 * N) and SC-O(1)
  if(n>limit) return -1;
  int low=1,high=*mx_element(arr.begin(),arr.end());
  while(low<=high){
  int mid=(low+high)/2;
  if(sumbyD(arr,mid)<=limit){
  high=mid-1;
  }
 else low=mid+1;
  }
 return low;
  }
*/