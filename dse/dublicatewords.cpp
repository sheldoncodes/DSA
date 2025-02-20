#include <iostream>
#include <sstream>
#include <unordered_set>
#include <vector>
#include <string>
#include <set>
using namespace std;

std::unordered_set<std::string> wordSet;
std::unordered_set<std::string> duplicateSet;
int processSentence(const std::string& sentence) {
    std::istringstream iss(sentence);
   // std::unordered_set<std::string> wordSet;
  //  std::unordered_set<std::string> duplicateSet;
    std::vector<std::string> uniqueWords;
    std::string word;
    int sentencelength =0;

    while (iss >> word) {
        sentencelength++;
        if (wordSet.find(word) != wordSet.end()) {
            duplicateSet.insert(word);
        } else {
            wordSet.insert(word);
            uniqueWords.push_back(word);
        }
    }

    

    if (uniqueWords.size()==0) {
        std::cout << "X"<<endl;
        return 1;
    } else if (uniqueWords.size() == sentencelength) {
        //std::cout << "-1";
        return -1;
    }
    else{
        //bool allDuplicates = true;
        for (const auto& w : uniqueWords) {
           
                std::cout << w << " ";
            }
            cout<<endl;
            return 1;
        
    }

    std::cout << std::endl;
    return 0;
};

void processInput(const std::string& input) {
    std::istringstream iss(input);
    std::string sentence;
    set <int> st;

    while (std::getline(iss, sentence, ',')) {
       st.insert( processSentence(sentence));
      

    }
    if(st.size()==1 && *st.begin() == -1){
        cout<<-1;
       }
}

int main() {
    std::string input1 = "God sees the sees people,god is great great,people sees the god";
    std::string input2 = "All that glitters,is,not gold";

    std::cout << "Output for input1:" << std::endl;
    processInput(input1);

    std::cout << "Output for input2:" << std::endl;
  //  processInput(input2);

    return 0;
}