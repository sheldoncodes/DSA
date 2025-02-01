#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        
        vector<int> temp;
        for(int i = 0; i< nums.size(); i++){
            temp.push_back(nums[i]);
        }
        sort(nums.begin(), nums.end());
        for(int i = 0; i< nums.size(); i++){
            if(abs(nums[i]-temp[i] ) > limit){
                swap(nums[i],temp[i]);
            }
        }

        return nums;
    }
int main()
{
    vector<int> temp = {1,5,3,9,8};
   vector<int> temp2=  lexicographicallySmallestArray(temp, 2);
   for(int i = 0 ;i< temp2.size(); i++){
    cout<<temp2[i]<<" ";
   }

}