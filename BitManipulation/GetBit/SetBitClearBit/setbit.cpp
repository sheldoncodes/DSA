// we have to set 1 at a give positon 

// this method convert any number to binary then do calculation ,keep in mind
#include<iostream>
using namespace std;

int setbit(int n, int pos){
    return n|(1<<pos);
}

int clearbit(int n,int pos){
    return n&(~(1<<pos));
}
int updatebit(int n,int pos,int val){
    int mask=~((1<<pos));
    n=n&mask;
    return n|(val<<pos);
}
int main(){
    cout<<setbit(5,1)<<endl;
    cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,1,1)<<endl;
}