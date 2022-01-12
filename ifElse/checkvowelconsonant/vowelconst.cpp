#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    int islowercaseV,isuppercaseV;
    islowercaseV=(c=='a' || c=='e' || c=='i'||c=='o'||c=='u');
    isuppercaseV=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(isuppercaseV||islowercaseV){
        cout<<"VOWEL";
    }else{
        cout<<"CONSONANT";
    }

}