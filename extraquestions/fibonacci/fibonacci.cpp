#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a NO";
    cin>>n;
    int a,b;
    a=0;
    int term;
    b=1;
    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<a<<" "<<b;
    }else{
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++){
        term=a+b;
        a=b;
        b=term;
        cout<<term<<" ";
    }
    }
}