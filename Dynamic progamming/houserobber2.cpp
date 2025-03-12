#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

int fl(vector<int> &nums){
    vector<int> dp (nums.size());
    int n = nums.size();
    if(n==1) return nums[0];
    if(n==2) return max(nums[0], nums[1]);

    dp[0] = nums[0];
    dp[1] = max ( nums[0], nums[1]);

    for(int i = 2 ; i< nums.size(); i++){
        int pick = nums[i] + dp[i-2];
        int notpick = dp[i-1];
        dp[i] = max(pick , notpick);
    }
    return dp[nums.size()-1];
}
int rob(vector<int>& nums) {
    int n = nums.size();
    if(n==1) return nums[0];
    if(n==2) return max(nums[0], nums[1]);

    vector<int> temp1;
    vector<int> temp2;

    for(int i = 0 ; i< nums.size(); i++){
        if(i!=0) temp1.push_back(nums[i]);
        if(i!=(n-1)) temp2.push_back(nums[i]);
    }

    return max(fl(temp1) , fl(temp2));

   

}
int main()
{
    vector<int> x {1,3,1,3,100};
    cout<<"---"<<rob(x);
return 0;
}