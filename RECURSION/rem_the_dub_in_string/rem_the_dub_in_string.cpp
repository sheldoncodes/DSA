// remove all the dublicates from a string 
//  input =aaaabbbbffffhhhhjjj
//output = abfhj
#include<iostream>
using namespace std;

string removeDublicate(string s){
    if(s.length()==0){
        return "";
    }


    string ans=removeDublicate(s.substr(1));
    if (ans[0]==s[0]){
        return ans;
    }
    else{
        return s[0]+ans;
    }



}
int main(){
    string s;
    cin>>s;
    cout<<removeDublicate(s);
}