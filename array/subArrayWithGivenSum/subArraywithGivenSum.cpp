/* Given an unsorted array A of size N of non negative   //INCOMPLETE
integers.find a continuous subarray which adds to a 
given number S.
[ 1 2 3 4 5]   S=7  ;ans will be [3 4] or 2,3
BRUTE FORCE 
find all possible subarrays and equate their sum to S
output the starting and ending point
time complexity O(n^2)

OPTIMIZATION
use two pointer approach
time complexity O(n)

*/
#include<iostream> 
#include<climits>
using namespace std;
int main(){
    
     int S;
     cout<<"enter Sum :";
     cin>>S;
     int n;
     cout<<"enter the length of array:<<endl";
    
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int st=0;
     int en=0;
     int currSum=0;
     while(st!=n-1 && en!=n-1){
         if(currSum<S){
         currSum+=arr[en];
         en++;
        
         }
     }


}