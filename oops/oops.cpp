#include<iostream>
using namespace std;

class Students {
     string name;
     int age;
     int height;


     public:
     int getAge(){
        return this->age;
     }
     void setAge(int age){
        this->age = age;
     }
     void setName(string name){
        this->name = name;
     }
     void setHeight(int heightinCm){
        this->height = heightinCm;
     }

     

     void printDetails(){
        cout<<"Name : "<<this->name<<endl;
        cout<<"Age : "<<this->age<<endl;
        cout<<"Height : "<<this->height<<endl;
     }
};

int main (){
     Students student;
    student.setAge(12);
    student.setHeight(135);
    student.setName("kermit");
    student.printDetails();

}