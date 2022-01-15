#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a NO";
    cin>>n;
    int fact=1;
    while(n>0){
        fact=fact*n;
        n=n-1;
    }
    cout<<fact;
}