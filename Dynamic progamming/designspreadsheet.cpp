#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spreadsheet {
public:
    vector<vector<int>> sp;

    Spreadsheet(int rows) {
        sp = vector<vector<int>>(rows, vector<int>(26, 0));
    }

    void setCell(string cell, int value) {
        char x = cell[0];
        int row = stoi(cell.substr(1)) - 1; // Convert 1-based to 0-based
        int col = x - 'A';
        sp[row][col] = value;
    }

    void resetCell(string cell) {
        char x = cell[0];
        int row = stoi(cell.substr(1)) - 1; // Convert 1-based to 0-based
        int col = x - 'A';
        sp[row][col] = 0;
    }

    int getvalue2(string s) {
        if (s[0] >= 'A' && s[0] <= 'Z') {
            int col = s[0] - 'A';
            int row = stoi(s.substr(1)) - 1; // Convert 1-based to 0-based
            return sp[row][col];
        } else {
            return stoi(s);
        }
    }

    int getValue(string formula) {
        size_t pos = formula.find('+');
        if (pos == string::npos) {
            // Handle invalid formula or unsupported operations
            return 0;
        }

        string part1 = formula.substr(1, pos - 1); // Skip '='
        string part2 = formula.substr(pos + 1);

        int val1 = getvalue2(part1);
        int val2 = getvalue2(part2);

        return val1 + val2;
    }
};

int main() {
    Spreadsheet sheet(24);

    cout << sheet.getValue("=5+7") << endl; // Output: 12

    sheet.setCell("A1", 10);
    cout << sheet.getValue("=A1+6") << endl; // Output: 16

    sheet.setCell("B2", 15);
    cout << sheet.getValue("=A1+B2") << endl; // Output: 25

    sheet.resetCell("A1");
    cout << sheet.getValue("=A1+B2") << endl; // Output: 15 (A1 is reset to 0)

    return 0;
}