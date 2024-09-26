#include <iostream>
using namespace std;


class LinkedList{

    public:
    int data;
  //  LinkedList *head;
    LinkedList *next;

    LinkedList(int data){
        this ->data = data;
        this ->next = NULL;
        
    }
    LinkedList(){

    }

    void insertathead(LinkedList* &head,int data){
        LinkedList* node = new LinkedList(data);
        node->next=head;
        head=node;
        
        
       
      //  cout<<"addresss of node"<<node<<endl;
      //  cout<<"value of node"<<node->data<<endl;
      //  cout<<"address of next"<<node->next<<endl;
        
        
       // cout<<"value of this"<<this;
    }

    // print complete list

    void printll(){
        LinkedList* temp = new LinkedList();
        temp = this; 
        while(temp->next!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }


    }
    
};

int main()
{
    LinkedList* linked = new LinkedList();
    linked->data =10;

    cout<<"address of first node"<<linked<<endl;
    LinkedList* head = linked;
    linked->insertathead(head,20);
    linked->insertathead(head,30);
    linked->insertathead(head, 40);

    linked->printll();


return 0;
}