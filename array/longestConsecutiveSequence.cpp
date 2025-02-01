#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map <int, int> mp;
        for(int i = 0 ; i< nums.size(); i++){
            mp[nums[i]]=1;
        }
        int ans = INT_MIN;
        int curr = 0;

        for(auto ct:mp){
            if(ct.second ==1){
                curr ++;
            }
            else{
                ans = max(ans, curr);
                curr = 0;
            }
        }
        ans = max(curr, ans);
        
    }
};
int main()
{
return 0;
}