#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int side1,side2,side3;
    cin>>side1>>side2>>side3;

    if(side1==side2 && side2==side3){
        cout<<"equilateral";
    }else if(side1==side2||side2==side3||side3==side1){
        cout<<"isosceles";
    }else{
        cout<<"scalene";
    }


}