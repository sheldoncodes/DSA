//binarysearch  array must be sorted
// time complexity O(log n base 2)
#include<iostream>
using namespace std;

int binarySearch(int arr[], int n,int key){
    if(key<arr[0] || key>arr[n-1]){
        return -1;
    }
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(key==arr[mid]){
            return mid;
        }else if(key>arr[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
        
    }return -1;
}

int main(){
    int n;
    int arr[n];
    int key;
    cout<<"enter the length ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter key: \n";
    cin>>key;
    cout<<binarySearch(arr, n, key);

}