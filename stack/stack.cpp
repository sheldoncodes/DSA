
#include<iostream>
using namespace std;


class Stack{

    public:
    int top ;
    int *arr ;
    int size;


    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;


    }

    void push(int element){
        if(size- top >1){
            top++;
            arr[top] = element;


        }
        else{
            cout<<"no empty space";
        }

    }

 int pop (){
            if(top>=0){
                return arr[top];
                top--;
            }
            else{
                cout<<"stack underflow";
                return  -1;
            }

            

    }
 
int peek(){
    if(top>=0 && top<size){
        return arr[top];
    }
    else{
        cout<<"stack underflow";
        return -1;
    }
}


    bool isEmpty(){
        if (top==-1){
            return true;
        }
        else{
            return false;
        }
    }




     
};

int main(int argc, char const *argv[])
{

    
   //Stack *s = new Stack(7);
   Stack s(8);



    s.push(9);
    s.push(4);
   cout<< s.pop();

    


}


