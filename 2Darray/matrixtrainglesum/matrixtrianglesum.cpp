#include <iostream> //matrix antidiagonal and upper sum ,matrix  antidiagonal and lower sum
using namespace std;

int main() {
    // Write C++ code here
    
    int N;
    cin>>N;
    int arr[N][N];
    for (int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
    // for upperdiagonal
    int sumupper=0;
    for (int i=0;i<N;i++){
        for (int j=0;j<N-i;j++){
            sumupper+=arr[i][j];
        }
    }
    cout<<sumupper<<endl;
    
    //for lowerdiagonal
    int sumlower=0;
    for (int i=0;i<N;i++){
        for(int j=N-1;j>=N-i-1;j--){
            sumlower+=arr[i][j];
        }
    }
    cout<<sumlower<<endl;

    return 0;
}