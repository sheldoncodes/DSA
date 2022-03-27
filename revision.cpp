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
    
        
      //solid diamond
      
    //space
 /*   int space=(2*n-1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
        space--;
        
    }
    space=0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
        space++;
    }*/
    
    //hollow diamond
 /*   int space=(2*n-1)/2;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=space;j++){
            cout<<"#";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1){
                cout<<"*";
            }else{
                cout<<"#";
            }
        }space--;
        cout<<endl;
    }
    // lower half
    space=0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<space;j++){
            cout<<"#";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1){
                cout<<"*";
            }else{
                cout<<"#";
            }
        }
        cout<<endl;
        space++;
    }
        
    */
        //solid rhombus
   /* for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"#";
        }
        for(int j=1;j<=n;j++){
            
            cout<<"*";
        }
        cout<<endl;
    }
    
    //hollow rhombus
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"#";
        }
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || i==1|| i==n){
            
            cout<<"*";
        }
            else{
                cout<<"#";
            }
        }
        cout<<endl;
    }*/
       //pyramid pattern for numbers
    
   /* for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"#";
        }
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }cout<<endl;
    }
    // pyramid pattern 2
        for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"#";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }cout<<endl;
    } */
    
    
    //solid butterfly
  /*  for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if (j<=i || j>2*n-i){
                cout<<"*";
            }else{
                cout<<"#";
        }
    }cout<<endl;
    
    }
    for(int i=n;i>=1;i--){
        for(int j=2*n;j>=1;j--){
            if (j<=i || j>2*n-i){
                cout<<"*";
            }else{
                cout<<"#";
            }
        }cout<<endl;
    }
    */
    
    
    
    //hollow butterfly
  /*     for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if (j==1 || j== i || j ==2*n || j==2*n-i+1){
                cout<<"*";
            }else{
                cout<<"#";
        }
    }cout<<endl;
    
    }
    for(int i=n;i>=1;i--){
        for(int j=2*n;j>=1;j--){
            if (j==1 || j== 2*n || j ==i || j== 2*n-i+1){
                cout<<"*";
            }else{
                cout<<"#";
            }
        }cout<<endl;
    }
    */
    // Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
/* pascal triangle

    int coef=1;
    for(int i=0;i<n;i++){
        for(int j=n;j>n-i;j--){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            if(k==0 || i==0){
                coef=1;
            }else{
                coef=coef*(i-k+1)/k;
            }
            cout<<coef<<" ";
        }
        cout<<endl;
        
    }
    
    */
    
    /* ZIG ZAG PAtTERN
    
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0 )|| ((i==2) && (j%4==0))){
                cout<<"*";
                
            }else{
                cout<<"#";
            }
        }cout<<endl;
    }
    
    */
    /*print digit right to left
    while(n>0){
        int rem=n%10;
        cout<<rem;
        n=n/10;
    }
    */
    /* ARMSTRONG NUMBER
    int total=0;
    int temp=n;
    while(n>0){
        int rem=n%10;
        total=total+(rem*rem*rem);
        n=n/10;
    }
    if(total==temp){
        cout<<"chacha vidhayak hai humare";
    }else{
        cout<<"boooooa";
    }
    */
    /*factorial;
    int fac=1;
    for (int i=1;i<=n;i++){
        fac=fac*i;
    }
    cout<<fac;
    */
/* fibbonaici upto n
        int a=0;
        int b=1;
    for(int i=1;i<=n;i++){
        
        
        cout<<a<<" ";
        int temp=b;
         b=a+b;
         a=temp;
        
        
    }
*/

//reverse a number
    /*
int rev=0;
int rem;
while(n>0){
    rem=n%10;
    n=n/10;==
    rev=rev*10+rem;
    
    
}
cout<<rev;
*/
    return 0;
}


