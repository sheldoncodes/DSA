//problem statement
// an arithematic array is an array that contains at least two integers
//and the differences between consecutive integers are equal.
// ex-[1,2,3,4],[9,10],[3,3,3],[9,7,5,3]

//find the maximum arithematic subarray
//actually find the length of maximum arithematic subarray


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int pd=a[1]-a[0]; //previous common difference
    int curr=2; //current arithmetic subarray length
    int ans=2; //max arithmetic aubarray length
    for(int i=2;i<n;i++){
        if(pd == a[i]-a[i-1]){
            curr++;

        }else{
            pd=a[i]-a[i-1];
            curr=2;

        }
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
}