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
class diameter{
    public static node insert(node root,int v){
        if(root==null){
            node nn = new node(v);
            return nn;
        }
        if(v<root.data){
            root.left=insert(root.left,v);
        }
        else if(v>root.data){
            root.right=insert(root.right,v);
        }
        return root;
    }
    public static int height(node root){
        if(root==null){
            return 0;
        }
        return 1+(Math.max(height(root.left),height(root.right)));
    }
    public static int diam(node root){
        if(root==null){
            return 0;
        }
        int lh=height(root.left);
        int rh=height(root.right);

        int ld=diam(root.left);
        int rd=diam(root.right);

        return Math.max(lh+rh+1,Math.max(ld,rd));
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        node root=null;
        for(int i=0;i<n;i++){
            int a=s.nextInt();
            root=insert(root,a);
        }
        System.out.println(height(root));
        System.out.println(diam(root));
    }
}
