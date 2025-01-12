
#include<iostream>

#include <vector>

#include <stack>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
       
    stack<int> st;
    for(int i = 0 ; i< s.size(); i++){
        st.push(s[i]);
    } 


    vector<char> ans ;
    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();

    }
    s = ans;
        
    }
};