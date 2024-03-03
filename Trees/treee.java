import java.util.*;
class node{
    int data;
    node left;
    node right;
    node(int d){
        this.data=d;
        this.left=this.right=null;
    }
}
public class treee{
    public static node insert(node root,int data){
        if(root==null){
            node nn = new node(data);
            return nn;
        }
        if(data<root.data){
            root.left=insert(root.left,data);
        }
        else if(data>root.data){
            root.right=insert(root.right,data);
        }
        else{
            return root;
        }
        return root;
    }

    public static int height(node root){
        if(root==null){
            return 0;
        }
        int left = height(root.left);
        int right=height(root.right);
        return Math.max(left,right)+1;
    }

    public static void postorder(node root){
        if(root==null){
            return;
        }
        postorder(root.left);
        postorder(root.right);
        System.out.println(root.data+" ");
    }

    public static int diameter(node root){
        if(root==null){
            return 0;
        }
        int lh = height(root.left);
        int rh = height(root.right);

        int ld = diameter(root.left);
        int rd = diameter(root.right);

        return Math.max(lh+rh+1,Math.max(ld,rd));
    }

    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        node root = null;
        for(int i=0;i<n;i++){
            int d=s.nextInt();
            root=insert(root,d);
        }
        // postorder(root);
        // System.out.println(height(root));
        System.out.println(diameter(root));
    }
}