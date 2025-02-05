#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
void ps (char input[], int index, vector<char> &pick, int n){
    if(index==n){
        for(int i = 0 ; i< pick.size(); i++){
            cout<< pick[i];
        }
        cout<<endl;
        return ;
    }

    ps(input , index+1 , pick, n);

    pick.push_back(input[index]);

    ps (input ,index+1 , pick , n);

    pick.pop_back();

}


void printSubsequences(char input[]) {
    // Write your code here
    vector<char> pick;
    int index = 0;
    int n = 0;
   while(input[n]!='\0'){
    n++;
   }

   
    ps(input , index,  pick, n);

}
int main()
{


 char input[] = {'a','b','c'};
 printSubsequences(input);
}