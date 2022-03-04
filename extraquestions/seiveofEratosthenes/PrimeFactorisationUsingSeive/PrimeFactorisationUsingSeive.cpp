//find all prime factor of a number using seive
//prime factors of 20 are 2,2,5
#include<iostream>
using namespace std;

void Primefactor(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
        }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    //just for representation of array 
  //  for(int i=0;i<n;i++){      
  //      cout<<spf[i]<<" ";
  //  }cout<<endl;
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
    

}
int main(){
    int n;
    cin>>n;
    Primefactor(n);

}