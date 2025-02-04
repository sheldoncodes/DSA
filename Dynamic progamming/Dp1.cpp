#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
//{ Driver Code Starts
// Initial Template for C++





// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long tdh(vector<long long> &a,int n){
        if(n<0){
            return -1;
        }
        if(a[n]!=-1){
            return a[n];
        }
        const long long mod = 1e9 +7;
        a[n] = (tdh(a,n-1)+ tdh(a,n-2))%mod;
        return a[n];
    }
    long long int topDown(int n) {
        long long prev = 0;
        long long prev2 = 1;
        if(n==0){
            return prev;
        }
        if(n==1){
            return prev2;
        }
         long long mod = 1e9 + 7;
        // code here
        for(int i =2 ; i<=n ; i++){
            long long curr = (prev+ prev2)%mod;
            prev = prev2;
            prev2 = curr;
            
            
        }
        return prev2;
    }
    long long int bottomUp(int n) {
        // code here
        vector<long long > a(n+1,-1);
        a[0]=0;
        a[1]=1;
        return tdh(a,n);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends
