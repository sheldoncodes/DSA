//binary coefficient nCr=n!/((n-r)!*r!)
#include<iostream>
using namespace std;

int factorial(int num){
    int product=1;
    for(int i=1;i<=num;i++){
        product*=i;

    }
    return product;
}
int main(){
    cout<<"enter n and r :n>r:"<<endl;
    int n,r,f;
    cin>>n>>r;
    f=factorial(n)/((factorial(n-r)*factorial(r)));
    cout<<f;



}