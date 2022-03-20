// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;

int main() {
    // Write C++ code here
    int a,b,c,sum;
    char ch;
    sum=0;
   // cin>>ch;
    
    
    cin>>a;
   // cin>>b;
//    cin>>c;




// prime no
/*
int i,j;
for( i=2;i<=a;i++){
    for( j=2;j<i;j++){
        if(i%j==0){
            break;
        }
        }
    if(i==j){
        cout<<i<<endl;
    }
}
*/

 //primeno
 /*
 cout<<"what";
    int i;
    for(i=2;i<a;i++){
     if(a%i==0){
         cout<<"not a prime"<<endl;
         break;
     }
 }
 if(i==a){
     cout<<"primeno"<<endl;
     
 }
 */
 

  /* // odd numbers
  for(int i=1;i<=a;i++){
       if(i%2==0){
           continue;
       }cout<<i<<endl;
   }
   */

/* // multiplication table
    for(int i=1;i<=10;i++){
        cout<<a*i<<"\n";
    }
*/

/*// sum of n natural numbers
    for(int i=1;i<=a;i++){
        sum+=i;
    }
    cout<<sum;
    
    */



   /* //vowel or consonat
     int islowercase,isuppercase;
    islowercase=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    isuppercase=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(islowercase||isuppercase){
        cout<<"vowel";
    }else{
        cout<<"not a vowel";
    }
    */
    
    
    
   /*{ if(a>b){
        if(a>c){
            cout<<"a is greatest\n";
        }else{
            cout<<"c is the greatest\n";
        }
    }else{
        if (b>c){
            cout<<"b is the greatest\n";
        }else{
            cout<<"c is the greatest\n";
        }
    }*/
    
    
    
    
  /*  max between two { if (a==b){
        cout<<"equal\n";
    }
    else if(a>b){
        cout<<"a is greater\n";
    }else{
        cout<<"b is greater\n";
    }
   }*/
    
    
   /* //odd even {
    if(a%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    }*/
    
    // Online C++ compiler to run C++ program online



 // Write C++ code here
 // odd number till n   cout << "Hello world!";
   int n;
   int m;
  bool b;
  
   /* for(int i=1;i<=n;i++){
        if(!(i%2==0)){
            cout<<i<<" ";
        }
    }
    */
    
    
    // prime or not
   /* b=false;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            b=true;
            break;
        }
    }
    if(b){
        cout<<"not prime";
    }else{
        cout<<"prime";
    }
    */
    
    
    
    //prime in a given range
  /*  cin>>m;
    for(int i=n;i<=m;i++){
       int j;
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }if(j==i){
            cout<<i<<" ";
        }
    }
    */
    
    // simple calculator using switch
  /*  cin>>m;
    char op;
    cin >>op;
    switch(op){
        case '+':
        cout<<n+m;
        break;
        case '-':
        cout<<n-m;
        break;
        default:
        cout<<"invalid";
        break;
    }
           */
/* solid rectangle      
     cin>>n>>m;
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             cout<<"*";
         }
         cout<<endl;
     }
     */
  /*   hollow rectangle
        cin>>n>>m;
     for(int i=1;i<=n;i++){
         for(int j=1;j<=m;j++){
             if ( i==1 || i == n || j==1 || j== m){
                 cout<<"*";
             }else{
                 cout<<" ";
             }
         }cout<<endl;
     }
*/

//  half pyramid
 /* cin>>n;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
          cout<<"*";
      }cout<<endl;
  }*/
  
  // inverted half pyramid
 
  /*  cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
 */
 
 // half pyramid after 180 degree rotation
/* cin>>n;
 for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
        if (j <= n-i){
            cout<<"#";
        }else{
            cout<<"*";
        }
        }cout<<endl;
 }*/
 
 //half pyramid using numbers
 /* cin>>n;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
          cout<<j;
      }cout<<endl;
  }*/


//inverted half pyramid
 /*cin>>n;
 for(int i=n;i>=1;i--){
     for(int j=1;j<=i;j++){
         cout<<j;
         
     }cout<<endl;
 }*/
 
 // half pyramid using number 2
 
 /*cin>>n;
 for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j++){
         cout<<i;
         
     }cout<<endl;
 }*/
 
 // inverted half pyramid using numbers 2
 /*cin>>n;
 for(int i=1;i<=n;i++){
     for(int j=1;j<=n-i+1;j++){
         cout<<i;
         
     }cout<<endl;
 }*/
 
// print(floyds triangle)
/*cin>>n;
int k=1;
for(int i =1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<k<<" ";
        k++;
    }cout<<endl;
}*/

//print 0 1 pattern
/*cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if ((i+j)%2==0){
            cout<<1;
        }else{
            cout<<0;
        }
    }cout<<endl;
}*/

//palindromic pattern

