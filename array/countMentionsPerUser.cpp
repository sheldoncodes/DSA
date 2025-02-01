#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

vector<int> countMentionsPerUser(int numberOfUsers, vector<vector<string>>& events) {
    vector<int> mentions(numberOfUsers, 0);
    unordered_map<int, int> user_status; // user_id -> offline_until_timestamp
    
    for (const auto& event : events) {
         const string& event_type = event[0];
        int timestamp = stoi(event[1]);
        
        if (event_type == "OFFLINE") {
            int user_id = stoi(event[2]);
            user_status[user_id] = timestamp + 60;
        } else { // "MESSAGE" event
            istringstream iss(event[2]);
            string token;
            while (getline(iss, token, ' ')) {
                if (token == "ALL") {
                    for (int i = 0; i < numberOfUsers; i++) {
                        mentions[i]++;
                    }
                } else if (token == "HERE") {
                    for (int i = 0; i < numberOfUsers; i++) {
                        if (user_status.find(i) == user_status.end() || timestamp >= user_status[i]) {
                            mentions[i]++;
                        }
                    }
                } else { // user id
                    int user_id = stoi(token.substr(2));
                    if (user_status.find(user_id) == user_status.end() || timestamp >= user_status[user_id]) {
                        mentions[user_id]++;
                    }
                }
            }
        }
    }
    
    return mentions;
}

int main() {
    vector<vector<string>> tm = {{"MESSAGE", "10", "id1 id0"}, {"OFFLINE", "11", "0"}, {"MESSAGE", "71", "HERE"}};
    int numberOfUsers = 2;
    vector<int> result = countMentionsPerUser(numberOfUsers, tm);

    for (int i = 0; i < result.size(); i++) {
        cout << "User " << i << " has " << result[i] << " mentions." << endl;
    }

    return 0;
}