#include<iostream>
// print all prime no upto n
// we will mark the multiple of all prime no which come
using namespace std;

void primeseive(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    primeseive(n);
}