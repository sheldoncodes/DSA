#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <sstream>

bool isPalindrome(const std::string &str) {
    int left = 0;
    int right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int countPalindromePairs(const std::vector<int> &numbers) {
    std::unordered_set<std::string> seen;
    int count = 0;

    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            std::string concat1 = std::to_string(numbers[i]) + std::to_string(numbers[j]);
            std::string concat2 = std::to_string(numbers[j]) + std::to_string(numbers[i]);
            if (isPalindrome(concat1) && seen.find(concat1) == seen.end() && seen.find(concat2) == seen.end()) {
                count++;
                seen.insert(concat1);
                seen.insert(concat2);
            }
        }
    }

    return count == 0 ? -1 : count;
}

std::vector<int> parseInput(const std::string &input) {
    std::vector<int> numbers;
    std::stringstream ss(input);
    std::string token;

    while (std::getline(ss, token, ',')) {
        numbers.push_back(std::stoi(token));
    }

    return numbers;
}

int main() {
    std::string input;
    std::cout << "Enter comma-separated values: ";
    std::getline(std::cin, input);

    std::vector<int> numbers = parseInput(input);
    int result = countPalindromePairs(numbers);

    std::cout << "Number of unique palindrome pairs: " << result << std::endl;

    return 0;
}