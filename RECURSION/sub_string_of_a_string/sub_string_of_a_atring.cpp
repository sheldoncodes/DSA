#include<iostream>
using namespace std;
void allsubstring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    allsubstring(ros,ans);
    allsubstring(ros,ans+ch);
    
    
}


int main(){
    string s;
    cin>>s;
    allsubstring(s,"");
}