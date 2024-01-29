#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right;
    node(int d){
        this->data=d;
        this->left=this->right=NULL;
    }
};
node * insert(node*root,int v){
    if(root==NULL){
        node * nn=new node(v);
        return nn;
    }
    if(v<root->data){
        root->left=insert(root->left,v);
    }
    else if(v>root->data){
        root->right=insert(root->right,v);
    }
    else{
        return root;
    }
    return root;
}
void lca(node * root,int p,int q){
    if(root->left->data==p && root->right->data==q){
        cout<<root->data;
        return;
    }
    else if(p<root->data){
        lca(root->left,p,q);
    }
    else{
        lca(root->right,p,q);
    }
}
int main(){
    int n;
    cin>>n;
    node * root=NULL;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        root=insert(root,a);
    }
    int p;
    cin>>p;
    int q;
    cin>>q;
    lca(root,p,q);
}