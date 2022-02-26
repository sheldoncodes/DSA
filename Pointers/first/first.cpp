#include<iostream>
using namespace std;

void swap(int *a , int *b){
        int temp=*b;
        *b=*a;
        *a=temp;
    } 
void increment(int *a){
     *a++;
    cout<<"working";
}
int main(){
    // int a=55;
    // int *aptr;
    // aptr=&a;
    // cout<<aptr<<" ";
    // cout<<&a<<" ";
    // cout<<*aptr<<" ";
    // cout<<&*aptr<<" ";
    // int arr[3]={11,22,33}; 
    // //cout<<*arr<<endl;
    // //cout<<arr<<endl;
    // int *bptr;
    // bptr=arr;
    // cout<<bptr<<endl;
    
    int m=7;
    int n=5;
    int *ptrm=&m;
    int *ptrn=&n;
    swap(ptrm,ptrn);
    increment(ptrm);
    cout<<m<<n;
}