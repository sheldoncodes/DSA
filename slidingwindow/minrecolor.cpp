#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
int minimumRecolors(string blocks, int k) {
    int i = 0;
    int j = 0;
    int ops = 0;
    int ans = INT_MAX;
    while(j<blocks.size()){
        if(blocks[j]=='W') ops++;
        ans = min(ans, ops);
        if( j-i + 1 > k){
            if(blocks[i]=='W')ops--;
            //ans = min(ans, ops);
            i++;
        }
        j++;
    }
    ans = min(ans,ops);
    return ans;
}
int main()
{
    string s = "BBBBBWWBBWBWBWWWBWBWBBBBWBBBBWBWBWBWBWWBWWBWBWWWWBBWWWWBWWWWBWBBWBBWBBWWW";
    int k = 29;
    int ans = minimumRecolors(s, k);
    cout<<"ans is --"<< ans <<"--";
    
return 0;
}