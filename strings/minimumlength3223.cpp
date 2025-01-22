#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
int minimumLength(string s) {
        //to perform the operation , frequency of that character must be greater 3
        int n = s.size();
         int arr[26]={0};
         for(int i = 0;i<n;i++){
            arr[s[i]-'a']++;
         }
            int sum =0;
         for(int i =0;i<26;i++){
            if(arr[i]>=3){
                if(arr[i]%2==0){
                    arr[i]=2;
                }
                else{
                    arr[i]=1;
                }
            }
            sum+=arr[i];
         }

         return sum;
    }
int main()
{
    string s = "ucvbutgkohgbcobqeyqwppbxqoynxeuuzouyvmydfhrprdbuzwqebwuiejoxsxdhbmuaiscalnteocghnlisxxawxgcjloevrdcj";
    int  ans = minimumLength(s);
    cout<<ans;
return 0;
}