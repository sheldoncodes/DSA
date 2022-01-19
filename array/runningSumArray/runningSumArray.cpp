#include<iostream>          
using namespace std;         

void runningsum(){
    int n;
    cout<<"enter length of array";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element:";
        cin>>array[i];
        
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=array[i];
        
    }
    cout<<"sum :"<<sum;
}
int main(){
    runningsum();
}
