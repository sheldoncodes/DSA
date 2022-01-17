#include<iostream> // code failed for negative integers but you can improve it.
using namespace std;

bool check(int i, int j, int k){
    int a =max(i,max(j,k));
    int b,c;
    if(a==i){
        b=j;
        c=k;

    }else if(a==j){
        b=i;
        c=k;
    }else{
        b=i;
        c=j;
    }
    if(a*a==b*b+c*c){
        return true;
    }else{
        return false;
    }

}




int main(){
    int x,y,z;
    cout<<"enter three no";
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"pythagorean triplet";
    }else{
        cout<<"not a pythagorean triplet";
    }
    
}