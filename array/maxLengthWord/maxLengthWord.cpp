#include<iostream>
using namespace std;
int main(){
    char arr[100];
    cin.getline(arr,100);
    

    int max=0;
    int current=0;
    int i=0;
    int st=0;
    int maxst=0;
    while(arr[i]!='\0'){
        if (arr[i]!=' '){
            current+=1;
        }
        else{
            if (max<current){
                max=current;
                maxst=st;
                
                
            }
            current=0;
            st=i+1;
        }


        i++;
    }
    cout<<max<<" ";
    cout<<maxst<<" ";
    for(int i=0;i<max;i++){
        cout<<arr[i+maxst];
    }
}