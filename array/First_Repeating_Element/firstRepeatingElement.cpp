#include<iostream> //please use appropraite headers <#include <bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
   
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }

    const int N =1e6+2;
    
     
    int idx[N];             //this sol has time complexity of O(n) but space complexity of O(a) where a is the maximum element stored in array input
    for(int i=0;i<N;i++){
    idx[i] = -1;

     }
    int minidx=INT_MAX;
    for(int i=0;i<n;i++){
       if(idx[arr[i]] != -1){
         minidx = min(minidx, idx[arr[i]]);
         
       }else{
         idx[arr[i]]=i; 
       }

     }
     if(minidx == INT_MAX){
       cout<<"-1"<<endl;
     }else{
       cout<<minidx+1<<endl;
     }
    
    

/*
     //  BRUTE SOL  time complexity O(n^2)
     bool flag=false;
     for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
             if(arr[i]==arr[j]){
                 cout<<arr[i];
                 flag=true;
                 break;
             }
         }if(flag){
             break;
         }
     }
     if(!flag){
         cout<<"element not found";
     }    */


}