#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> handleQuery(int n, vector<vector<int>>& queries) {
        // Create a difference array and an answer array
        vector<int> array(n + 1, 0);
        
        for (const auto& query : queries) {
            int l = query[1], r = query[2], val = query[3];
            // Perform range update using the difference array
            array[l] += val;
            if (r + 1 < n) {
                array[r + 1] -= val;
            }
        }

        // Now, convert the difference array back to result array
        vector<int> result(n, 0);
        result[0] = array[0];
        for (int i = 1; i < n; i++) {
            // Calculate the prefix sum to get final values
            array[i] += array[i - 1];
            result[i] = array[i];
        }

        return result;
    }
};

int main() {
    Solution sol;
    int n = 5; // Length of the array
    vector<vector<int>> queries = {
        {1, 0, 2, 100}, // Add 100 from index 0 to index 2
        {2, 1, 3, 100}, // Add 100 from index 1 to index 3
        {3, 0, 4, 100}  // Add 100 from index 0 to index 4
    };

    vector<int> result = sol.handleQuery(n, queries);
    
    // Output the final state of the array
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}
