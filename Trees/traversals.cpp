#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right;
    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node * insert(node * root,int v){
    if(root == NULL){
        node * nn =new node(v);
        return nn;
    }
    if(v<root->data){
        root->left = insert(root->left,v);
    }
    else if(v>root->data){
        root->right = insert(root->right,v);
    }
    else{
        return root;
    }
    return root;
}
void preorder(node * root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}


int main(){
    int n;
    cin>>n;
    node * root= NULL;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        root = insert(root,a);
    }
    preorder(root);
}