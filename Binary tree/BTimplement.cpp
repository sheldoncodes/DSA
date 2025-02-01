#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;


class node{

public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

node* buildtreeusingstack(node* root){
    
}


node* buildtreerecusrive(node* root){
    int data;
    cin>>data;

    if(data== -1){
        return NULL;
    }

    root = new node(data);

    root->left = buildtreerecusrive(root);
    root->right = buildtreerecusrive(root);
    return root;
}

void preordertraversal(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data;
    preordertraversal(root->left);
    preordertraversal(root->right);
} 
void postodertraversal(node* root){
    if(root==NULL){
        return;
    }
        postodertraversal(root->left);
        postodertraversal(root->right);
        cout<<root->data;
    
}
void inordertraversal(node* root){
    if(root==NULL){
        return ;

    }

    inordertraversal(root->left);
    cout<<root->data;
    inordertraversal(root->right);
}




int main()
{
    
    int arr[]= { 1,2,3,-1,-1,4,-1,-1,5,6,-1,-1,7,-1,-1};
    // 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 7 -1 -1
    node* obj;
    obj = buildtreerecusrive(obj);
    preordertraversal(obj);


return 0;
}