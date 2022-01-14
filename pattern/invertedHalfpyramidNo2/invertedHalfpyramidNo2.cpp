#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<i<<" ";
        }cout<<endl;
    }
    
}
/*
enter n7
1 1 1 1 1 1 1 
2 2 2 2 2 2
3 3 3 3 3
4 4 4 4
5 5 5
6 6
7
*/
