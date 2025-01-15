#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#
using namespace std;

class CheckperfertBT
{
    
public:


    int depth(Node* root){
        if(root->NULL){
            return 0;
        }
        
        return max(depth(root->left), depth(root->right)) + 1;
    };
    
    bool checkperf(Node* root, int d){
        if(root==NULL){
            return true;
        }
        if(root->left==NULL && root->right == NULL){
            return d==1;
        }
        if(root->left ==NULL || root->right == NULL){
            return false;
        }
        
        bool ans = checkperf(root->left, d-1) &&  checkperf(root->right, d-1);
        return ans;
        
        
        
    };
    
    
    
    bool isPerfect(Node *root)
    
    {
        int d = depth(root);
        bool ans = checkperf(root, d);
        return ans;
        
        
        //code here
    }
};


class Node
{ 
    public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};








int main()
{

 




return 0;
}