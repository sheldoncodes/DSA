#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {

         int n = grid.size();
        int m = grid[0].size();
       vector<int> rows(n, 0);
       vector<int> cols(m, 0);
       

       
        for(int i = 0; i< n ; i++){
           
           
            for(int j = 0  ; j<m ; j++){
                if(grid[i][j]==1){
                    
                    rows[i]++;  //[1,1]
                    cols[j]++;  //[1,1]
                    
                }
                
            }
        }

        

        int ans = 0;
        for(int i = 0; i< n ; i++){
            
           
            for(int j = 0  ; j<m ; j++){
                if((rows[i]>1 || cols[j]>1 ) && grid[i][j]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};

int main()
{

    Solution solution;
    vector<vector<int>> grid = {{1, 0}, {0, 1}};
    cout << solution.countServers(grid) << endl;
    return 0;
};