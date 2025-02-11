#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
int f(int i , int j1, int j2 , int r , int c , vector<vector<int>>& grid, vector<vector<vector<int>>> &dp){
        if(j1<0 || j2<0 || j1>=c || j2>=c ) return -100;
            
        
        
        if(i== r-1){
            if(j1==j2) return grid[i][j1];
            else return (grid[i][j1] + grid[i][j2]);
            
        }
        if(dp[i][j1][j2] != -1) return dp[i][j1][j2];
        int maxi = -1e8;
        
        for(int dj1 = -1; dj1<=1 ; dj1++){
         
            for(int dj2 = -1 ; dj2<=1 ; dj2++){
                 int value = 0;
                if(j1==j2) value = grid[i][j2];
                
                else value = grid[i][j1] + grid[i][j2];
                
                value += f(i+1, j1+dj1, j2+dj2, r, c, grid, dp);
                maxi = max(value , maxi);
            }
        }
        return dp[i][j1][j2] =maxi;
    }
    int solve(int n, int m, vector<vector<int>>& grid) {
        
        vector<vector<vector<int>>> dp (n , vector<vector<int>> (m , vector<int> (m,-1)));
        return f(0,0, m-1, n, m , grid, dp);
        // code here
    }
int main()
{
    vector<vector<int>> grid = {
        {3, 1, 1},
        {2, 5, 1},
        {1, 5, 5},
        {2, 1, 1}
    };
    cout << "Maximum number of chocolates: " << solve(4, 3, grid) << endl;

return 0;
}