#include<iostream>           //use <climit> to use MAX_INT or MIN_INT
using namespace std;         

void arrayinitialize(){
    int n;
    cout<<"enter length of array";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element:";
        cin>>array[i];
        
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
void arrayMinMax(){
    int n;
    cout<<"enter length of array";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){            
        cout<<"enter "<<i<<" element:";
        cin>>array[i];
    }
     
    int maxNo=array[0];
    int minNo=array[0];
    for(int i=0;i<n;i++){
        if(array[i]>maxNo){            //maxNo=max(maxNO,array[i])
            maxNo=array[i];
        }
        if(array[i]<minNo){          //minNo=min(minNO,array[i])
            minNo=array[i];
        }

    }
    cout<<"minimum no :"<<minNo<<endl;
    cout<<"maximum no :"<<maxNo<<endl;
    

}
int main(){
    int array[3];
    array[0]=10;
    array[1]=9;
    array[2]=20;
    int array2[4]={1,2,3,4};
    
    cout<<array[2]<<endl;
    cout<<array2<<endl;
    arrayinitialize();
    arrayMinMax();

}