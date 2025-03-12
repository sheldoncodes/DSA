#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
string findValidPair(string s) {
        vector<int> mp ( 10, 0);
        string ans = "";
        for(int i = 0 ;i< s.size() ; i++){
            mp[s[i]-'0']++;
        }
        for(int i = 0 ; i< s.size() -1; i++){
            if(s[i] != s[i+1] && mp[s[i]-'0']== s[i]-'0' && mp[s[i+1]-'0'] == s[i+1]-'0'){
                ans += s[i];
                ans += s[i+1];
            }
            if(ans.size()==2){
                break;
            }
        }
        return ans;
    }
int main()
{
    string s = "2523533";
   string ans =  findValidPair(s);
   for(int i = 0 ;  i< ans.size() ; i++){
    cout<<ans[i];
   }
return 0;
}