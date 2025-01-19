#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <unordered_map>
using namespace std;

string isPalindrome(string s) {
        //
       // unordered_map<char, int> mp {-1};
        
        string ans = "";
       for(int i = 0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'  || s[i]>='A' && s[i]<='Z'){
           if( s[i]>='A' && s[i]<='Z'){
             ans += (char)tolower(s[i]);
           }
           else{
            ans += s[i];
           }
        }
       }

       return ans;
    }

int lengthOfLongestSubstring(string s) {
        int r =0;
        int l = 0;
        int maxlen = 0;
        unordered_map<int, int > mp;
        for(int i = 0 ; i<256; i++){
            mp[i]=-1;
        }



        while(r<s.size()){
            if( mp[s[r]] == -1 || mp[s[r]] <=l){
                mp[s[r]]=r;
                int len = r-l+1;
                maxlen = max(len , maxlen);
                r++;
            }
            else{
                l = mp[s[r]]+1;
                mp[s[r]]= r;
                r++;
            }

        }

        return maxlen;
    }
int main()
{

   // string s= "flnfjdhfue  @#$ whh hhf;lds hHHHKJH jkhkjhh";
   // cout<<isPalindrome(s);
   string s = "tmmzuxt";
   cout<<lengthOfLongestSubstring(s);

return 0;
}