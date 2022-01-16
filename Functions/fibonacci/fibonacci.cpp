#include<iostream>
using namespace std;
void fibo(int n){
    int t1=0;
    int t2=1;
    if(n==1){
        cout<<t1;
    }else if(n==2){
        cout<<t2;
        }
    else{
        
        for(int i=1;i<=n;i++){
            cout<<t1<<endl;
            int term=t1+t2;
            t1=t2;
            t2=term;
            
        }
    }

}
int main(){
    int n;
    cin>>n;
    fibo(n);
    return 0;
}
