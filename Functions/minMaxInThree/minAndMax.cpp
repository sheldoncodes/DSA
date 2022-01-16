#include<iostream>
using namespace std;

int max(int a ,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b>c){
            return b;
        }else{
            return c;
        }
    }
}

int min(int a ,int b,int c){
    if(a>b){
        if(b>c){
            return c;
        }else{
            return b;
        }
    }else{
        if(a>c){
            return c;
        }else{
            return a;
        }
    }
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<min(x,y,z)<<endl;
    cout<<max(x,y,z);
}