#include<iostream>
using namespace std;
int main(){
    int rows,col;
    cout<<"rows,col"<<endl;
    cin>>rows>>col;
    for(int i=0;i<col;i++){
        cout<<"# ";
    }
    cout<<endl;
    for(int j=0;j<rows-2;j++){
        cout<<"# ";
        for(int k=0;k<col-2;k++){
            cout<<"  ";

        }cout<<"# ";
        cout<<endl;
    }
    for(int i=0;i<col;i++){
        cout<<"# ";
    }
}
/*
rows,col
6
9
# # # # # # # # #
#               #
#               #
#               #
#               #
# # # # # # # # #
*/
