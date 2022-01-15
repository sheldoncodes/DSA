#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a NO";
    cin>>n;
    int rev_rem=0;
    while(n>0){
        int rem=n%10;
        rev_rem=rev_rem*10+rem;
        n=n/10;
    }
    cout<<rev_rem;
    return 0;
}