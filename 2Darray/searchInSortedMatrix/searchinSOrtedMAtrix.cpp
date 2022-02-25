//sorted 2d array given 
// sorted by rows and colums

/*
    1 2 3
    4 5 6
    7 8 9 */

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;

    int r=0;
    int c=n-1;
    bool flag=false;
        while(r<m && c>=0){
           
           if (arr[r][c]==target){
              cout<<r<<" "<<c<<"\n";
              cout<<"element found";
              flag=true;
                break;   }
            if (arr[r][c]>target){
                c--;
                                }
            else{
                 r++;
                 }
        }
        if (flag!=true){
            cout<<"element not found";
        }
        
    
}
