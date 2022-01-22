// subarray is a continous part of the array
// total number of subarray in an array is
// nC2 + n =n*(n+1)/2
// 
//a subsequence is a sequence that can be derived an array
// by selecting zero or more elements, without changing the order of the remaining elements.
//number of subsequences of an array with n elements
//     2^n
//every subarray is a subsequence but every subsequence is not a subarray.


// PROBLEM: SUM OF ALL SUBARRAYS
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int total;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        total=0;
        for(int j=i;j<n;j++){
            total=total+a[j];
            cout<<total<<"  ";

        }cout<<endl;
    }

}