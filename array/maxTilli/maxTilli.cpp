// keep a variable mx which stores the maximum till ith element.
// iterate over the array and update
// question is to find maximum till ith index.
#include<iostream>
#include<climits>

using namespace std;
int main(){
    int mx=INT_MIN;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
        cout<<mx <<endl;
    }

}