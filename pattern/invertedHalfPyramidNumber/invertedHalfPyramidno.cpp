#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n";
    cin >> n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}
/*
enter n5
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/