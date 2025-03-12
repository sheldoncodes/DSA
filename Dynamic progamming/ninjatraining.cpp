#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;




// } Driver Code Ends
class Solution {
  public:
  
  int  f(int ind , vector<int> &arr, int pos , vector<int> &dp){
        if(ind==0){
            return dp[pos];
            
        }
        if(dp[ind*3+pos]!=-1){
            return dp[ind*3+pos];
        }
        if(pos ==2) {
        dp[ind*3+pos] = max( f(ind-1, arr, 1,dp), f(ind-1, arr, 0,dp)) + arr[ind][pos];
        }
      else  if(pos ==1){
            dp[ind*3+pos] = max(f(ind-1, arr, 2,dp), f(ind-1, arr, 0,dp))  + arr[ind][pos];
        }
        else{
            dp[ind*3+pos] = max(f(ind-1, arr, 1,dp), f(ind-1, arr, 2,dp))  + arr[ind][pos];
        }
        return dp[ind*3+pos];
        
        
    }
  
    int maximumPoints(vector<vector<int>>& arr) {
        // Code here
       // [[1,2,3], [4,5,6]];
        int n = arr.size();
        vector<int> dp(arr.size()*3 , -1);
        dp[0]= arr[0][0];
        dp[1] = arr[0][1];
        dp[2] = arr[0][2];
        
    int ans = max(f(n-1,arr, 0 , dp), max(f(n-1,arr,1, dp), f(n-1,arr,2 , dp)));
    return ans;
    
        
    }
    
};

//{ Driver Code Starts.

// } Driver Code Ends

int main()
{
return 0;
}