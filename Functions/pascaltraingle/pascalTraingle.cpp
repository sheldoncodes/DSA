//pascal triangle
/*5
1        index start from zero and every number is Binary  
11       coefficient of index :like (1,0)=1 and (1,1)=1
121      (2,1)=2
1331
14641     (4,2)
*/

#include<iostream>
using namespace std;
int fact(int num){
    int product=1;
    for(int i=1;i<=num;i++){
        product*=i;

    }
    return product;
}

int nCr(int n,int r){
    int f;
     f=fact(n)/((fact(n-r)*fact(r)));
    return f;
}


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j);
        }
        cout<<endl;
    }
}