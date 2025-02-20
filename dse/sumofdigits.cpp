#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    string input;
    cout << "Enter the array elements separated by commas: ";
    getline(cin, input);

    // Parse the input string to extract integers
    vector<int> inarr;
    stringstream ss(input);
    string temp;
    while (getline(ss, temp, ',')) {
        inarr.push_back(stoi(temp));
    }

    // Map to store the sum of digits and corresponding numbers
    unordered_map<int, vector<int>> sumMap;

    // Fill the map with sums of digits
    for (int num : inarr) {
        int sum = sumOfDigits(num);
        sumMap[sum].push_back(num);
    }

    // Count the pairs with the same sum of digits
    int pairCount = 0;
    for (const auto& entry : sumMap) {
        if (entry.second.size() > 1) {
            int n = entry.second.size();
            pairCount += (n * (n - 1)) / 2; // Combination nC2
        }
    }

    // Print the result
    if (pairCount > 0) {
        cout << pairCount << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}