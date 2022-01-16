#include<iostream>
using namespace std;

int add(int num1,int num2){
    int sum;
    sum=num1+num2;
    return sum;
}
int main(){
    cout<<"enter two numbers";
    int a,b;
    cin>>a>>b;
    int sum;
    sum=add(a,b);
    cout<<sum;
}