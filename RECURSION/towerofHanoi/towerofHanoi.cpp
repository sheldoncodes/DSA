#include<iostream>
using namespace std;

void toh(int n,char source,char helper,char destiny){
    if(n==0){
        return;
    }
    

    toh(n-1,source,destiny,helper);
    cout<<source<<" to "<<destiny<<endl;
    toh(n-1,helper,source,destiny);
}
int main(){
    toh(3,'A','B','C');
}