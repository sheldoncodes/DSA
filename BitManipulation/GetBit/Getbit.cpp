#include<iostream>
using namespace std;
int getbit(int n,int pos){
    return (n&(1<<pos))!=0;
}
int main(){
    cout<<getbit(5,2);

    // our no is 5 which 101 in binary and second position is 1 form right (0 index)
    //if we shift 1<<pos ,we will get 100
    // 101&100 will give 1 thats the actual value at second pos


}