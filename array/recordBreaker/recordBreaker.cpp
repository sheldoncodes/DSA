#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=a[0];
    int rbd=0;
    if(a[0]>a[1]){
        rbd++;
        cout<<"rbd is"<<a[0];
    }
    for(int i=1;i<n-1;i++){         // 1 2 3 4 5
        if(a[i]>mx){
            mx=a[i];
            if(a[i]>a[i+1]){
                rbd++;
                cout<<"rbd is"<<a[i];
               
            }
        }

    }
    if(a[n-1]>mx){
        rbd++;
        cout<<"rbd is"<<a[n-1];
        }
    cout<<rbd;

}