#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
class solution {
int count = 0;

    void merge(vector<int> &nums, int l , int m , int r){
        int left = l;
        int right = m+1;
        vector<int> ans;
        

     /*   for(int i = l ; i<=m ; i++){
            int j = r;
            while(j>=m+1 && 2*(long long)nums[j]>= (long long)nums[i]){
                j--;
            }
            count += (j-m);
        }*/

        while(left<=m && right<=r){
            if(nums[left]<nums[right]){
                ans.push_back(nums[left]);
                left++;
            }
            else{
                ans.push_back(nums[right]);
                right++;
            }
        }
        while(left<=m){
            ans.push_back(nums[left]);
                left++;
        }
        while(right<= r){
            ans.push_back(nums[right]);
                right++;
        }
        for(int i = 0 ; i< ans.size(); i++){
            nums[l+i] = ans[i];
        }
    }

    void mergesort(vector<int> &nums, int l , int r){
        if(l>=r){
            return;
        }
        int m = l+(r-l)/2;
        mergesort(nums,l,m);
        mergesort(nums,m+1 , r);
        merge(nums,l, m , r);
    }
    int reversePairs(vector<int>& nums) {
        
        mergesort(nums, 0 , nums.size()-1);
        return count;
    }
};
int main()
{
return 0;
}