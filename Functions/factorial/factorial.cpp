#include<iostream>
using namespace std;

void factorial(int num){
    int product=1;
    for(int i=1;i<=num;i++){
        product*=i;

    }
    cout<<product;
}
int main(){
    int n;
    cin>>n;
    factorial(n);
}