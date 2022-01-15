#include<iostream>
using namespace std;
int main(){
    int n,org_no;
    cout<<"enter a NO";
    cin>>n;
    org_no=n;
    int total=0;
    while(n>0){
        int rem=n%10;
        n=n/10;
        total=total+rem*rem*rem;

    }
    if(total==org_no){
        cout<<" I am Armstrong";
        
    }else{
        cout<<"i am not Armstrong";
       
    }
}