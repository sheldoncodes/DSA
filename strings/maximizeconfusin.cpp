#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <map>

using namespace std;

#define pp pair<int,int>

int maxConsecutiveAnswers(string answerKey, int k) {
      pp toy =   make_pair(12,22);
        int t = k;
        int f = k;
        int l =0;
        int r = 0;

        int ans =0;
        while(r< answerKey.size()){
            if(answerKey[r]=='T'){
                f--;
            }
            else{
                t--;
            }


            while(t<0 && f<0 ){
                if(answerKey[l]=='T'){
                f++;
            }
            else{
                t++;
            }
            l++;

            }

            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
int main()
{
    cout<< maxConsecutiveAnswers("TTFTTTFTFTFTTTTFFFTFTT",5);
return 0;
}