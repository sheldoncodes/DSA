#include<iostream>   //convert binary number into decimal no
using namespace std;
int main(){
    int n;
    cout<<"enter a binary Number";
    cin>>n;

    int ans=0;
    int rem;
    int x=1;
    while(n>0){
        rem=n%10;
        ans=ans+x*rem;
        x*=2;
        n/=10;
    }
    cout<<ans;
}