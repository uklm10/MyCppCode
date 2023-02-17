#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
// count all node 

int Height (node* root){
    if(root==NULL){
        return 0;
    }
    int leftheight = Height(root->left);
    int rightheight = Height(root->right);
    return max(leftheight,rightheight)+1;
    
}

int calDiameter(node*root){
    if(root == NULL){
        return 0;
    }
    int lheight = Height(root->left);
    int rheight = Height(root->right);
    int curdiameter = lheight +rheight+1;
    int ldiameter = calDiameter(root->left);
    int  rdiameter= calDiameter(root->right);
    return max(curdiameter,max(ldiameter,rdiameter));
}

int main(){
    struct node* root = new node(1);
    root -> left = new node(2);
    root -> right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<calDiameter(root)<<"\n";
     
}