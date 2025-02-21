#include <iostream>
#include <string>
#include <vector>

bool isSpecialCharacter(char c) {
    return !isalnum(c);
}

bool isOddDigit(char c) {
    return isdigit(c) && (c - '0') % 2 != 0;
}

bool isEvenDigit(char c) {
    return isdigit(c) && (c - '0') % 2 == 0;
}

std::string processString(const std::string& instr) {
    std::vector<char> oddDigits;
    std::vector<char> evenDigits;
    int specialCharCount = 0;

    for (char c : instr) {
        if (isSpecialCharacter(c)) {
            specialCharCount++;
        } else if (isOddDigit(c)) {
            oddDigits.push_back(c);
        } else if (isEvenDigit(c)) {
            evenDigits.push_back(c);
        }
    }

    std::string outstr;
    size_t oddIndex = 0, evenIndex = 0;
    bool startWithOdd = specialCharCount % 2 != 0;

    while (oddIndex < oddDigits.size() && evenIndex < evenDigits.size()) {
        if (startWithOdd) {
            outstr += oddDigits[oddIndex++];
            if (evenIndex < evenDigits.size()) {
                outstr += evenDigits[evenIndex++];
            }
        } else {
            outstr += evenDigits[evenIndex++];
            if (oddIndex < oddDigits.size()) {
                outstr += oddDigits[oddIndex++];
            }
        }
    }

    while (oddIndex < oddDigits.size()) {
        outstr += oddDigits[oddIndex++];
    }

    while (evenIndex < evenDigits.size()) {
        outstr += evenDigits[evenIndex++];
    }

    return outstr;
}

int main() {
    std::string instr;
    std::getline(std::cin, instr);
    std::string outstr = processString(instr);
    std::cout << outstr << std::endl;
    return 0;
}