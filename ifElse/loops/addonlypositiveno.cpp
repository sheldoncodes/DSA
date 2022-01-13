#include<iostream>
using namespace std;
int main(){
    int n,sum;
    sum=0;
    cin>>n;
    while(n>=0){   // loop
        sum+=n;
        cout<<"enter a no";
        cin>>n;

    }
    cout<<"the sum is "<<sum;
    return 0;
}