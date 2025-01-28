#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
#define pii pair<int, int>
class Solution {
public:
    bool isValid(int x, int y , int m , int n){
        return (x>=0 && x<m && y>=0 && y<n);
    }
    int findMaxFish(vector<vector<int>>& grid) {
        // make a matrix which depict three things 
        // 1 visited or not visited and valid or not valid ( 0, 1,2,) 0-- invalid, 1- not visited , 2 -- visited
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> vis(m, vector<bool>(n,false));

        //visited array creation
     /*for(int i = 0; i< m ; i++){
            for(int j = 0 ; j< n ; j++){
                if(grid[i][j]==0){
                    vis[i][j]=0;
                }
                else{
                    vis[i][j]=1;
                }
            }
        } */

        int ans = 0;
        int curr = 0;
        int dir[] = {-1,0,1,0,-1};

        for(int i = 0 ; i< m ; i++){
            for(int j = 0 ; j < n; j++){
                queue<pii> q;
                q.push({i,j});
                
                while(!q.empty()){
                    int x= q.front().first;
                    int y = q.front().second;
                    if(isValid(x,y, m,n) && vis[x][y]==false && grid[x][y] ){
                         curr+=grid[x][y];
                         vis[x][y]= true;

                         for(int i = 0 ;i<4 ;i++){
                            int newx = x + dir[i];
                            int newy = y + dir[i+1];
                            q.push({newx,newy});

                         }

                    }
                    q.pop();


                }
                ans = max(ans, curr);
                curr = 0;
            }
        }
        return ans;




    }
};
int main()
{
    Solution sol;
    vector<vector<int>> grid = {
        {0, 2, 1, 0},
        {4, 0, 0, 3},
        {1, 0, 0, 4},
        {0, 3, 2, 0}
    };
    cout << "Maximum number of fish: " << sol.findMaxFish(grid) << endl;
    return 0;
return 0;
}