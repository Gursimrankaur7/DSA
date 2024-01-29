import java.util.*;
class node{
    int data;
    node left;
    node right;
    node(int d){
        this.data=d;
        this.left=null;
        this.right=null;
    }
}
class postOrder{
    public static node insert(node root,int d){
        if(root==null){
            node nn = new node(d);
            return nn;
        }
        if(d<root.data){
            root.left=insert(root.left,d);
        }
        else if(d>root.data){
            root.right=insert(root.right,d);
        }
        else{
            return root;
        }
        return root;
    }
    public static void postorder(node root){
        if(root==null){
            return;
        }
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data+" ");
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        node root=null;
        for(int i=0;i<n;i++){
            int a=s.nextInt();
            root=insert(root,a);
        }

        postorder(root);


    }
}