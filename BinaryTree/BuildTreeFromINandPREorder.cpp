#include<iostream>
#include<queue>
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

// Print level order traversal
void printLevelOrder(node* root){
    if(root==NULL){
        return;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* Node= q.front();
        //cout<<" A -> ";
        q.pop();
        if(Node != NULL){
            cout<<Node->data<<" ";
            if(Node->left){
                q.push(Node->left);
            }
            if(Node->right){
                q.push(Node->right);
            }
        }
        else if (!q.empty()){
            //cout<<" <- h ";
            q.push(NULL);
        }
    }
}

int sumAtK(node* root,int k){
    if(root==NULL){
        return -1;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* Node= q.front();
        //cout<<" A -> ";
        q.pop();
        if(Node != NULL){
            cout<<Node->data<<" ";
            if(Node->left){
                q.push(Node->left);
            }
            if(Node->right){
                q.push(Node->right);
            }
        }
        else if (!q.empty()){
            //cout<<" <- h ";
            q.push(NULL);
        }
    }

}

int main(){
    struct node* root = new node(1);
    root -> left = new node(2);
    root -> right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    printLevelOrder(root);
}
