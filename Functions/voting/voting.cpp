#include<iostream>
using namespace std;

bool vote(int age){
    if(age>=18){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int age;
    cout<<"enter your age";
    cin>>age;
    if(vote(age)){
        cout<<"yes go for vote";

    }else{
        cout<<"no you cant vote";
    }
}