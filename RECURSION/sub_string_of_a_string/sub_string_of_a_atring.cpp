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
// this function will print sub string with their ascii value
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code =ch;
    string ros = s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans + to_string(code));
}


int main(){
    string s;
    cin>>s;
    allsubstring(s,"");
    subseq(s,"");
}