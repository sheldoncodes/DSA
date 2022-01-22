#include<iostream> //time complexity O(n^2)
using namespace std;

int main(){
    int n;
    cout<<"enter the length ";
    cin>>n;
     int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

  // write your code here  
  /*  for(int i=1;i<n;i++){
        for(j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }

        }
    }*/
    for(int i=0;i<n;i++){
        int current =arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }

}
