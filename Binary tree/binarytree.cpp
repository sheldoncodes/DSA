#include<iostream> 
#include<queue>
#include <stack>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this ->left = NULL;
        this ->right = NULL;
    }


};


class poor{
    public:
    
    int state;
    node* root;

    poor(node* root , int state){
        this -> root = root;
        this -> state = state;
    }
};


//node class


//build function recursive

node* buildtree (node* root){
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"inset data at left of"<<data;
   root->left =  buildtree(root);

    cout<<"insert data at right of"<<data;
   root->right = buildtree(root);
   return root;


};

//buildfunction
node* buildusingstack(){
    int arr[] = {90,25,12,-1,-1,37,30,-1,-1,-1,75,62,-1,70,-1,-1,87,-1,-1};
    // notation in stack state 1=l, 2=r,3 = pop
    stack <poor> st;
     node*  root = new node(arr[0]);
  //  poor p = poor(root , 1);
    st.push(poor(root,1));

    

    int idx = 1;
    //traversal not working
    while(!st.empty() && idx < sizeof(arr)){
        poor& top = st.top();
        if(top.state==1){

            if(arr[idx]!= -1){
            
             node* lp= new node(arr[idx]);
             
            top.root->left = lp;
           // poor p = poor(lp,1);
            st.push(poor(lp,1));
            
         }
         top.state=2;
         idx++;
        }

        else if(top.state == 2){
            if(arr[idx]!=-1){
                node * rp = new node(arr[idx]);
                top.root->right = rp;
               // poor p = poor(rp,1);
                st.push(poor(rp,1));
        }
             idx++;
             top.state = 3;

          }
        else{
            st.pop();
        }
    } 
    return root;


};



/*void preordertraversal(node *root){
      queue<node*>  q;
      q.push(root);
      q.push(NULL);
      while(!q.empty()){
        node* temp = q.front();
        cout<<temp->data<< " ";
        q.pop();
        if(temp==NULL){
            cout<<endl;
        }
        else {
        if(temp->left!= NULL){
            q.push(temp->left);
        }
        if(temp->right!= NULL){
            q.push(temp->right);
        }
        }



      }
}*/
//
void preordertraversal(node* root) {

    if (root == nullptr) return;

    cout << root->data << " ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}

void inordertraversal(node* root){
    if(root==NULL){
        //cout<<root->data <<" ";
        return;
    }
    inordertraversal(root->left);
    cout<<root->data <<" ";
    inordertraversal(root->right);
    

}
void postordertraversal(node* root){
    if(root==NULL){
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int count =q.size();
        for(int i =0; i<count;i++){
        node* temp = q.front();
        cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        q.pop();

        
    }
    cout<<endl;

    }
}

int height(node* root) {
        if(root==NULL){
        return 0;
        }
        // code here
        queue < node* > q;
        int ans = 0;
        
        q.push(root);
        while(!q.empty()){
           
            int count = q.size();
            for(int i =0;i<count;i++){
                node* temp = q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                
                    
            }
            ans++;
            
            
        }
        return ans-1;
    }

int heightrecursive(node* root){
    if(root == NULL){
        
        return 0;
    }
    int left = heightrecursive(root->left);
    int right = heightrecursive(root->right);
    int ans = max(left , right )+1;
    return ans;
}

void preoderiterative(node* root){
    stack<node*> st;

    //we are using the stack not queue idiot
    st.push(root);
    while(!st.empty()){
        node* temp = st.top();
        cout<<temp->data<<" ";
        st.pop();
        if(temp->right){
        st.push(temp->right);
        }
        if(temp->left){
        st.push(temp->left);
        }
        



    }
}

void preOrderUsingStack(node* root){

    stack<node*> st;
    st.push(root);
    while(!st.empty()){
        node* temp = st.top();
        cout<<temp->data<<" ";
        st.pop();

        if(temp->right!=NULL){
            st.push(temp->right);
        }
         if(temp->left!=NULL){
            st.push(temp->left);
        }
    }

}
class Poststate{
    public:
    node* root;
    int state;

    Poststate(node* root , int state){
        this->root = root;
        this->state = state;
    }


};
void postOrderUsingStack(node * root){
     stack<Poststate> st;
     Poststate temp=  Poststate(root,0);
     st.push(temp);

     while(!st.empty()){

          temp = st.top();
          int state = temp.state;
          if(state==0){
            st.top().state=1;
            if(temp.root->left!= NULL){
            temp.root = temp.root->left;
            temp.state= 0;
            st.push(temp);
            }

          }

          else if(state == 1){
            st.top().state=2;
            if(temp.root->right!=NULL){
            temp.root = temp.root->right;
            temp.state= 0;
            st.push(temp);
            }

          }
          else{
            cout<<temp.root->data<<"- ";
            st.pop();

          }
     }
     

}

int main(){

    node *obj;
    obj = buildusingstack();
    cout<<endl;
    postordertraversal(obj);
    cout<<endl;
    postOrderUsingQueue(obj);

    //preOrderUsingStack(obj);

    /*preoderiterative(obj);
    cout<<endl;
    levelOrderTraversal(obj); */
    
    


   /*cout<<"this is the height using iterative"<<height(obj);
    cout<<endl;
    cout<<"this is the height using recursive"<<heightrecursive(obj);
    cout<<endl; */


   // obj = buildtree(obj);
  /* preordertraversal(obj);
   cout<<endl;
   inordertraversal(obj);
   cout<<endl;
   postordertraversal(obj); */

   //levelOrderTraversal(obj);



}