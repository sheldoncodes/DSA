// Write a program to check if a given number is a power of two 2
// n&n-1 will be 0 if n is a power of 2
// n && is used just to make our code suitable for 0 input .

#include<iostream>
using namespace std;

bool check(int n){
    return n && !(n&(n-1));
}
int main(){
    cout<<check(0)<<endl;
}