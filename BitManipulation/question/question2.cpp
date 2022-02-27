//write a program to count the nos of one in a binary representation of a number
// n&n-1 will only change the one  set bit
// 20&19 (10100 & 10011) =10000
// this will decrease one (1) from our number
//and if we do the procedure again 
// (10000&01111)=00000 ,16&15=0
//when it become 0 we have stop and count how many time we did the procedure


#include<iostream>
using namespace std;

int count1(int n){
    int count=0;
    while(n){
        n=n&n-1;
        count++;
    }
    return count;
    }

int main(){
    cout<<count1(31)<<endl;
}