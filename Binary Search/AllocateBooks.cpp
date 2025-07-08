/*
this is a question in which we have to allocate books to the number of 
students in which you should keep some things in mind
1) each student gets at least one book
2) each book should be allocated to only one student
3) Book allocation should be in a contiguous manner
 you have in total of m number of students to distribute in 
 all
 now approach: 
 example array[]={25,46,28,49,24 and m=4, the array is for pages means arr[i] represents the number of pages in the i-th book
 means you have to distribute between 4 students and return the min 
 again what min means is for eg
 i made this part
 25,46,28,(49,24)
 so i have distributed it between 4 students
 and then sum of 49+24=73
 again after all combinations i figured out that 71 is the min sum taking 25+46
 so final is (25,46),28,49,24->71
 now when i start thinking to write the code 
 if i took 24 then we cant take books of page greater than this so every element except this 
 will be wasted 
 so i took the max element of the array
 so that every element under this can be taken
 so first we will go with the linear search then try to optimise it using BS
 and maximum it will go to sum of the elements of the array in this it will only go to one student
 but can't go greater than this
 code: (in this it will go from 49-172)
 low=max(arr),high=sum(arr);//TC-O(sum-max+1)*O(N)
 for(pages=low->high){
 cntStudent=func(arr,pages);
 if(cntStudent==m) return pages;
 }
 func(arr,pages){
 student=1,pagesStudent=0;
 for(i=0->n-1){
 if(pagesStudent+arr[i]<=pages) pagesStudent+=arr[i];
 else student++;
 }
 return student;
 }
second approach:
we will be using binary search as we have figure out min and max value of our search space
code:
int countStudents(vector<int>&arr,int pages){
int students=1;
long long pagesStudent=0;
for(int i=0;i<arr.size();i++){
if(pagesStudent+arr[i]<=pages){
pagesStudent+=arr[i];
}
else{
students+=1;
pagesStudent=arr[i];
}
}
return students;
}
int findPages(vector<int>&arr,int n,int m){
if(m>n) return -1;
int low=*max_element(arr.begin(),arr.end());
int high=accumulate(arr.begin(),arr.end()0);
while(low<=high){
int mid=(low+high)/2;
int students=countStudents(arr,mid);
if(students>m) low=mid+1;
else high=mid-1;
}
return low;//TC-O(log(sum-max+1) base 2 * n) , SC-O(1)
}
*/         