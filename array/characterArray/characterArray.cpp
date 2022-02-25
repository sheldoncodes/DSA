#include<iostream> //character array end with null character so always make an character array of 1 size plus . Null character is \0
using namespace std;
int main(){
    char arr[100];
    cin>>arr;
    cout<<arr<<endl;
    char arr2[100]="Gorilla";
    int i=0;
    while(arr2[i]!='\0'){
        cout<<arr2[i];
        i++;
    }

}