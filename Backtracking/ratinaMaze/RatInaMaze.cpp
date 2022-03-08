//there is rat in maze
//  INPUT  
// [1 0 1 0 1
//  1 1 1 1 1
//  0 1 0 1 0
//  1 0 0 1 1 
//  1 1 1 0 1]

//  OUTPUT
//  [1 0 0 0 0
//   1 1 1 1 0
//   0 0 0 1 0
//   0 0 0 1 1
//   0 0 0 0 1]

// 1 means free to go 0 mean blocked
// he can only move forward and downward 
// free the rat


#include<iostream>
using namespace std;

bool blockcheck(int ** arr,int x,int y, int n){

    if(x<n && y<<n && arr[x][y]==1){
        return true;
    }
    return false;
}


bool ratinMaze(int** arr, int x , int y, int n, int ** solArr){
    if(blockcheck(arr,x,y,n)){
        solArr[x][y]=1;
        if(ratinMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(ratinMaze(arr,x,y+1,n,solArr)){
            return true
        }
    }
}
int main(){

}