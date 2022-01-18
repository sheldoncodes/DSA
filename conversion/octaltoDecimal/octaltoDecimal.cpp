#include<iostream>   //convert binary number into decimal no
using namespace std;
int main(){
    int n;
    cout<<"enter an octal  Number";
    cin>>n;
    int rem,ans;
    int x;
    x=1;
    ans=0;

    while(n>0){
        rem=n%10;
        ans=ans+rem*x;
        x=x*8;
        n/=10;
    }
    cout<<ans;
}