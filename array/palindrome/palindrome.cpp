#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool flag=true;
    for (int i=0;i<n;i++){
        if (arr[i]!=arr[n-1-i]){
            flag=false;
            break;
        }
    }if (flag==true){
        cout<<"haan hai ye palindrome";
    }else
        cout<<"nahi hai ye palindrome";
}