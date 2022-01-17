#include<iostream>
using namespace std;
int sumn(int n){
    int total;
    total=n*(n+1)/2;
    return total;
}
int main(){
    int n;
    cout<<"enter a no";
    cin>>n;
    cout<<sumn(n);
}