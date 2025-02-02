#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
        vector<int> gap( 1,startTime[0]);
        // create an array of free time
        for(int i = 1 ;i<startTime.size(); i++){
            gap.push_back(startTime[i]-endTime[i-1]);
        }
        gap.push_back(eventTime-endTime.back());

        vector<int> suff(gap.size(),0);
        for(int i = gap.size()-2;i>=0; i--){
            suff[i]= max(suff[i+1],gap[i+1]);
        }
        vector<int> pref(gap.size(),0);

        for(int i = 1 ; i<gap.size(); i++){
            pref[i]= max(pref[i-1],gap[i-1]);
        }
        int ans = 0;
        for(int i = 1;i< gap.size(); i++){
            int meettime = endTime[i-1]-startTime[i-1];
            if(meettime<= max(pref[i], suff[i])){
                ans = max(ans, gap[i-1]+gap[i] + meettime);
            }
            ans  = max( ans, gap[i-1] +gap[i]);
        }
        return ans;


    
    }
int main()
{
    int testcase;
   // cin>> testcase;
    int eventime = 10;
    vector<int> startTime = {0,7,9};
    vector<int> endTime = {1,8,10} ;
    cout<<maxFreeTime(eventime,startTime,endTime);

return 0;
}