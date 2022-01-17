#include<iostream> // got some issues
using namespace std;

int swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<x<<y;
    return (x,y);
}
int main(){
    int a,b;
    //cin>>a,b;
    a,b=4,7;
    cout<<"value of a"<<a;
    cout<<"value of b"<<b;
}