#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <sstream>
#include <map>
using namespace std;
int getvalues (string s){
    int val=0;
    for(int i = 0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            val = val*10 + (s[i]-'0');
        }
    }
    return val;
}
vector<string> parseinput(string input){
    istringstream ss (input);
    string word;
    vector<string> words;
    while(getline(ss,word,',')){
        words.push_back(word);

    }
    return words;

}
int main()
{
    string input;
    string sg ="";
    int mx = -1;
    cin>>input;
    map<int, vector<string> > mp;

    vector<string> words =  parseinput(input);
   
    for(int i = 0 ; i< words.size() ;i++){
        int val =  getvalues(words[i]);
        if(mp.find(val)!=mp.end()){
            mp[val].push_back(words[i]);
            }
        else{
            mp[val]= {words[i]};
            }
            if(val>mx){
                mx = val;
                sg = words[i];
            }
    }
    vector<string> final ;
    
    for(auto ct:mp){
        for(int i = 0 ;i< ct.second.size(); i++){
            final.push_back (ct.second[i]);
        }
    }
    cout<<sg;
    for (auto ct: final){
        cout<< ","<<ct;
    }
  
    
    

return 0;
}