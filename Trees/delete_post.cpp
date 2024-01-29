#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = this->right = NULL;
    }
};
node *insert(node *root, int v)
{
    if (root == NULL)
    {
        node *nn = new node(v);
        return nn;
    }
    if (v < root->data)
    {
        root->left = insert(root->left, v);
    }
    else if (v > root->data)
    {
        root->right = insert(root->right, v);
    }
    else{
        return root;
    }
    return root;
}
void postorder(node * root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    if(root->left!=NULL || root->right!=NULL){
        cout<<root->data<<" ";
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
    postorder(root);
}