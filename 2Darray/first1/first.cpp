#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    void search(int N){
        for(int i=0;i<3;i++){
            for( int j=0;j<3;j++){
                if (arr[i][j]==N){
                    cout<<"element found"<<arr[i][j];
                }
            }
        }
    }
    
}