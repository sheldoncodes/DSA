#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int> freetime ;
        freetime.push_back(startTime[0]-0);
        int i;
        for(i = 0; i<startTime.size()-1; i++){
            freetime.push_back(startTime[i+1]-endTime[i]);
        }
        //last wala
        freetime.push_back(eventTime-endTime[i]);

        int ans = 0;
        int count = 0;
        int timesum= 0;
        int left = 0;
        
         for(int i = 0 ; i<freetime.size(); i++){
            cout<<freetime[i]<<" ";}
        for(int i = 0 ; i<freetime.size(); i++){
            timesum+=freetime[i];
            count++;
            while( count > k+1){
                timesum -= freetime[left];
                left++;
                count--;
            }
            ans = max(ans, timesum);
        }
        return ans;
        
    }
int main()
{
    vector<int> start = {1,3};
    vector<int> end = {2,5};
  cout<<   maxFreeTime(5,1,start,end);
return 0;
}