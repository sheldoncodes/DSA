#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="I Wanna Be What I Used To Be";

    //to lower
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }cout<<s<<endl;
    // to upper
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    
}