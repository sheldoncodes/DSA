#include <iostream>
#include <vector>
#include <unordered_set>
#include <sstream>
using namespace std;

// Function to find the sum of proper divisors of a number
int sumOfProperDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

// Function to find special integers in the input array
vector<int> findSpecialIntegers(const vector<int>& input) {
    unordered_set<int> inputSet(input.begin(), input.end());
    unordered_set<int> specialSet;
    vector<int> result;

    for (int num : input) {
        int sumDivisors = sumOfProperDivisors(num);
        if (inputSet.find(sumDivisors) != inputSet.end()) {
            specialSet.insert(sumDivisors);
        }
    }

    for (int num : input) {
        if (specialSet.find(num) != specialSet.end()) {
            result.push_back(num);
            specialSet.erase(num); // Ensure each special integer is added only once
        }
    }

    if (result.empty()) {
        result.push_back(-1);
    }

    return result;
}

// Function to parse input string into a vector of integers
vector<int> parseInput(const string& input) {
    vector<int> numbers;
    stringstream ss(input);
    string token;

    while (getline(ss, token, ',')) {
        numbers.push_back(stoi(token));
    }

    return numbers;
}

int main() {
    string input;
    cout << "Enter comma-separated values: ";
    getline(cin, input);

    vector<int> numbers = parseInput(input);
    vector<int> output = findSpecialIntegers(numbers);

    for (int num : output) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}