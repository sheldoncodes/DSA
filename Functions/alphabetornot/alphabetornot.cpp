#include<iostream>
using namespace std;

void checkalphabet (char c){
    if(int(c)>=65 && int(c)<=90 || int(c)>=97 && int(c)<=122){
        cout<<"yes "<<c<<" is an alphabet";
    }
    else{
        cout<<"no it is not an alphabet";
    }

}
int main(){
    char c;
    cin>>c;
    checkalphabet(c);
}