#include <iostream>
#include<climits>
#include<bits/stdc++.h>

using namespace std;

int hexadecimaltodecimal(string n){

    int ans= 0;
    int x = 1;
    int s = n.size();

    for(int i = s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans = ans + (n[i]-'0')*x;
          
        }else if(n[i]>='A' && n[i]<='F'){
            ans = ans + (n[i]-'A'+10)*x;
           
        }
          x=x*16;
    }
    return ans;



}


int octaltodecimal(int n){
    int res = 0;
    int mul = 1;
    while (n>0){
        int rem = n%10;
        res = res + rem * mul;
        mul = mul * 8;
        n = n/10;

    }

    return res;
}

int decimaltobinary(int n){
    int res = 0;
    int mul = 1;
    
    while(n!=0){
        int bit = n & 1;
        n = n>>1;
        res = res + bit * mul;
        mul = mul * 10;
    }
    return res;
}

int Binarytodecimal(int n){

    int mul = 1;
    int res = 0;
    while(n>0){
        int rem = n%10;
       res = res + rem*mul;
        mul  = mul * 2;
        n = n /10;

    }
    return res;
}

int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int factorial(int n){
    int res =1; 
    for(int i = 1 ;i<=n;i++){
        res = res * i;
    }
    return res;
    }
int binarycoff(int n , int r){
    int res = factorial(n)/(factorial(r)*factorial(n-r));
    return res ;
}
int SumOfFirstN(int n){
    int res = 0;
    while (n>0){
        res = res + n;
        n -=1;
    }
    return res;
}

bool PythagoreanTriplet(int a , int b , int c){
    
    int y,z;
    int x  = max(a,max(b,c));
    if(x == a){
        y= b;
        z = c;
    }else if( x == b){
        y = a;
        z = c;
    }else{
        y =a ;
        z = b;
    }
    if(x*x == y*y + z*z){
        return true;
    }
    else {
        return false;
    }
    

}



int main() {

    // topic 1 and 2
    /*
    int a = 2;
    cout<<a<<endl;
    float pi = 3.14; //7 decimal digits 
    cout<<pi<<endl;
    double pi2= 3.142857; // 15 decimal digits
    cout<<pi2<<endl;
    char what = 'a';
    cout<<what<<endl;
    bool check = true;
    bool check2 = false;
    bool check3 = 1;
    bool check4 = 0;
    cout<<check<<check2<<check3<<check4<<endl;
    unsigned int negative = 10;
    cout<<negative<<endl;
    // signed int -- used for integer
    // unsigned int  -- cannot store negative values
    cout<<"Hello World\n";
    char ch;
    cin>>ch;
    cout<<ch<<endl;
    int mary;
    cin>>mary;
    cout<<mary<<endl;
    char def;
    cout<<def<<endl;

*/


//if else
/*
int age;
cin>>age;
if(age>18){
    cout<<"you can VOTE"<<endl;
}
else{
    cout<<"you can't VOTE"<<endl;
}
   */

   //even odd

/*
int number;
cin>>number;
if(number%2==0){
    cout<<"even\n";

}

else{
    cout<<"odd\n";
}*/

// triangle check

/*
int sidea,sideb,sidec;
cin>>sidea>>sideb>>sidec;
if(sidea==sideb && sideb == sidec){
    cout<<"equilateral\n";

}
else if (sidea == sideb || sideb == sidec || sidec == sidea){
    cout<<"isosceles\n";
}
else{
    cout<<"scalene\n";
}*/

//Ques1. Program to find sum of natural numbers till n.
/*
int n;
cin>>n;
int sum=0;
for(int i=1;i<=n;i++)
{
    sum = sum + i;
}
cout<<sum;
*/

//Ques2. Program to display multiplication table upto 10
/*
int n;
cin>>n;
for(int i=1;i<=10;i++){
    cout<<i*n<<endl;
}*/

//Ques3. Program to add only positive numbers

/*
int number;
cin>>number;
int sum = 0;
while(number>=0){
    sum = sum+ number;
    cin>>number;

}
cout<<sum;
*/

// prime or not prime
/*
int n;
int i;
cin>>n;
for(i=2;i<=n;i++){
    if(n%i==0){
        break;
    }
    
}
if(n==i){
    cout<<"prime";
}else{
    cout<<"not prime";
}

*/

// write a program to print all prime no in a given range

/*

int num1;
int num2;
int j;
cin>>num1>>num2;
for(int i=num1;i<=num2;i++){
    for( j=2;j<=i;j++){
        if(i%j==0){
            
            break;
        }
    }
    if(i==j){
        cout<<i<<endl;
    }
}
*/ 

// write a program to print all odd number till n
/*
int n;
cin>>n;
for(int i=0;i<=n;i++){
    if(i%2==0){
        continue;
    }
    cout<<i<<endl;
}
*/

/*
int n = 1;
switch(n){
    case 5: cout<<"5";
    
    case 2: cout<<"2";
    break;
    case 3: cout<<"3";
    break;
    case 4: cout<<"4";
    break;
    case 1: cout<<"1";
    break;
}
*/
/*
int n = 5;
if(n++>10){
    cout<<"this works is if";
}
if(++n == 7){
    cout<<n<<endl;
}
cout<<n;
*/
/*
int a;
int b;
a = 1,2,3;
b = (1,2,3);
cout<<a<<b;
*/
 // solid rectangle
/*
int l = 6;
int h = 9;
for(int i=1;i<=h;i++){
    for(int j = 1;j<=l;j++){
        cout<<"*";
    }
    cout<<endl;
}
*/

// hollow rectangle
/*
int l = 9;
int b = 5;
for(int i =1;i<=b;i++){
    for(int j = 1;j<=l;j++){
        if((i>1 && i<b) && (j>1 && j<l) ){ // easy logic (i ==1 || i == rows || j== colums || )
            cout<<" ";
        }else{
            cout<<"*";
        }
    }
    cout<<endl;
}*/


// half pyramid

/*int n = 7;
for(int i = 1;i<=n;i++){
    for(int j = 1;j<=i;j++){
        cout<<"*";
    }cout<<endl;
}*/

// inverted half pyramid

/*
int n = 7;
for(int i =7;i>=1;i--){
    for(int j = i;j>=1;j--){ // j can move forward
        cout<<"*";
    }cout<<endl;
}*/

// half pyramid one 180
/*
int n = 7;
for(int i = n;i>=1;i--){
    for(int j = 1;j<=n;j++ ){
        if(j<i){
            cout<<" ";
        }else{
            cout<<"*";
        }
    }cout<<endl;
}*/

//half pyramid using numbers
/*
int n = 7;
for(int i =1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }cout<<endl;
}*/

//inverted half pyramid
//int n = 7;
/*
for(int i = 1;i<=n;i++){
    for(int j = 1 ; j <=n-i+1;j++  ){
        cout<<j;
    }
    cout<<endl
}*/
// half pyramid using number 2
/*
for(int i =1;i<=n;i++){
    for(int j= 1 ;j<=i;j++){
        cout<<i;
    }
    cout<<endl;
}*/

//inverted half pyramid using number 2
/*
 for(int i =1;i<=n;i++){
    for(int j = 1 ;j <= n-i+1;++j){
        cout<<i;
    }
    cout<<endl;

 }*/
 // floyds triangle
 /*
 int counter = 1;
 for(int i = 1 ;i<=n;i++){
    for(int j = 1 ;j<=i;j++){
        cout<<counter <<" ";
        counter++;
    }cout<<endl;
 }
 //pattern 01
 

int p =1;
for(int i=1;i<=n;i++){       
    for(int j=1;j<=i;j++){ // if(i+j)%2 == 0 cout <<"1"; else cout<<"0";
        cout<<p<<" ";
        p =  !p ;
    }
    cout<<endl;
} 
*/
// palindromic pattern


/*
int n = 47;
bool status = false;
for(int i=2;i<=n/2 ;i++){
    if(n%i==0){
        status = true;
        cout<<i;
        break;
    }

}
if(status){
    cout<<"not a prime";
}
else{
    cout<<"prime";
}
*/

//print all digit of a decimal number from left to right

/*
int n = 4567345;
while(n>0){


    int rem = n%10;
    cout<<rem<<"\n";
    n = n/10;

    CHECK IF A NUMBER IS ARMSTRONG OR NOT


int n = 153;
int temp = n;
int check = 0;
while (n>0){
  int rem = n%10;
  check = check + (rem*rem*rem);
    n=n/10;

}
if (check == temp){
    cout<<"i am armstrong";
}else{
    cout<<"i am not armstrong";
}

FACTORIAL OF A NUMBER



// int n =7;
int result = 1;
while (n>0){
result = result *n;
n = n-1;
}
cout<<result;

print first n terms of fibonacci



int n = 10;
if(n==1){
    cout<<"0";

}else if(n == 2 ){
    cout<<"0"<<" "<<1;
}else{
    int a = 0;
    int b = 1;
    cout<<a <<" "<<b<<" ";
    for(int i = 3;i<=n;i++){   // 0 1 1 2 3 5
        int temp = a + b;
        cout<< temp <<" ";
        a = b;
        b = temp;
    }
}

REVERSE A NUMBER



int n = 78483;
int reverse = 0;
int mul = 10;
while (n>0){
 int rem =  n%10;
 n = n/10;

 reverse = reverse * mul + rem;

}
cout<<reverse;


display all factors


int n = 100;
int sqrt = 10;
for(int i = 2;i<=sqrt;i++){
    if(n%i== 0 ){
        cout<<i<<" ";
        cout<< n/i<<" ";

    }
}

BINARY COFFICIENT
NCR = N!/(N-R)!



int re = binarycoff(6,3);
cout<<re;
*/

//cout<<PythagoreanTriplet(5,13,4);
//cout<<Binarytodecimal(110101);
//cout<<decimaltobinary(10000);
//cout<<octaltodecimal(17);
//cout<<('9'-'1');
//cout<<hexadecimaltodecimal("1CF"); 


}



