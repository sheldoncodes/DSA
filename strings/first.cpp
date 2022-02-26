#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str;
    // cin>>str;
    // string str1(5,'s');
    // cout<<str;        whatuenter with spaces
    // cout<<str1;       sssss
    // string str3;
    // getline(cin,str3);
    // cout<<str3<<endl;    everything  even with spaces
    //    string s1="fam";
    //    string s2="ily";
    //    s1.append(s2);
    //    cout<<s1<<endl;     append will add string at the end
    //    cout<<s1+s2<<endl;
    //    cout<<s1[1]<<endl;
    //    s1.clear();
    //    cout<<s1;
    //    string a="abc";
    //    string b="abc";
    //    cout<<b.compare(a)<<endl;

          string g7="sheldoncooper";
          g7.erase(5,3);
          cout<<g7<<endl;
          cout<<g7.find("oop")<<endl;
          g7.insert(5,"onc");
          cout<<g7<<endl;
          cout<<g7.size();
          string g8;
          g8=g7.substr(6,4);
          cout<<g8<<endl;
          string g9="786";
          int x=stoi(g9);
          cout<<x+9<<endl;
          int n=989;
          cout<<to_string(x)+"4"<<endl;
          string h6="wannalivemylifewithyoui56576512ntheoceanandamerican";
          sort(h6.begin(),h6.end());
          cout<<h6<<endl;




    
}