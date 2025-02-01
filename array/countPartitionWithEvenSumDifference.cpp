#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
int countPartitions(vector<int>& nums) {
        int sumr = 0;
        int suml = nums[0];
        int ans = 0;
        
        for(int i = 1 ; i<nums.size(); i++ ){
            sumr+=nums[i];
        }
        for(int i  = 1 ; i< nums.size(); i++){
            if( (sumr-suml)%2==0){
                ans++;
            }
            suml+= nums[i];
            sumr -= nums[i];
        }
        return ans;

        
        
    }
int main()
{
    vector<int> tm = {1,2,2};
    cout<<countPartitions(tm);

return 0;
}