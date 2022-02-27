//write all possible subset of a set
// {a,b,c}={},{a},{b},{c},{a,b},{b,c},{c,a},{a,b,c}
    //  =0=0
    //  c=1=1
    //  b=2=10
    //  bc=3=11
    //  a=4=100
    //  ac=5=101
    //  ab=6=110
    //  abc=7=111
#include<iostream>
using namespace std;
void subset(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }

} 
int main(){
    int arr[4]={1,2,3,4};
    subset(arr,4);

}
     