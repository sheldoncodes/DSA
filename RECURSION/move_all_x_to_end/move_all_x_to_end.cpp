// move a given character at the end of string for example
// input = aabbdgddfiehdhfue   char =f
// output = aabbdgddiehdhueff
//  :)
#include<iostream>
using namespace std;
string moveallx(string s,char x){
    if(s.length()==0){
        return "";
    }
    string ans=moveallx(s.substr(1),x);
    if (s[0]==x){
        return ans+x;
    }
    else{
        return s[0]+ans;
    }
    

}
int main(){
    string s;
    cin>>s;
    char x;
    cin>> x;
    cout<<moveallx(s,x);
}