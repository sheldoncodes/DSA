#include<iostream>
using namespace std;
int main(){
    bool flag;
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }if(n<=1){
        flag=false;

    }
    if (flag){
        cout<<"prime\n";
    }else{
        cout<<"notprime\n";
    }
}