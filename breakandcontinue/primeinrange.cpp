#include<iostream>
using namespace std;
int main(){  //print all prime in range(a,b)
    int a,b;
    int i,j;
    cin>>a>>b;
    
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;

            }
        }if(j==i){
            cout<<i<<endl;
        }
    }

}