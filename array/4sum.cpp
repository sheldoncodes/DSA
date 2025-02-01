#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        int l = 0;
        int r = 0;
        for(int i = 0; i<n-3; i++){
            if(i>0 && nums[i]== nums[i-1]) continue;
            for(int j = i+1; j<n-2; j++){
                if(j>1+i && nums[j]== nums[j-1]) continue;
                l = j+1; 
                r = nums.size()-1;
                while(l<r){
                    long long sum = nums[i]+ nums[j] + nums[l] + nums[r];
                    if(sum == target){
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                        while(l<r && nums[l]==nums[l-1])l++;
                        while(l<r && nums[r]==nums[r+1])r--;;
                        
                    }
                    else if(sum > target){
                        r--;
                    }
                    else{
                        l++;
                    }
                }
            }
        }
        return ans;
        
    }
int main()

{
    vector<int> temp = {0};
   vector<vector<int>> ans =  fourSum(temp,0);
   for(auto ct: ans){
    for(auto xt : ct){
        cout<<xt;
    }
   }
return 0;
}