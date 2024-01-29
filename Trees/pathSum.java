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
class pathSum{
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
    public static boolean path(node root,int target){
        if(root==null)
        return false;
        Stack<node> n=new Stack<>();
        Stack<Integer> sum = new Stack<>();

        n.add(root);
        sum.add(root.data);

        while(!n.isEmpty()){
            node temp = n.pop();
            int s=sum.pop();

            if(temp.left==null && temp.right==null && s==target){
                return true;
            }

            if(temp.right!=null){
                n.push(temp.right);
                sum.push(temp.right.data+s);
            }
            if(temp.left!=null){
                n.push(temp.left);
                sum.push(temp.left.data+s);
            }

        }

        return false;

    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        node root=null;
        for(int i=0;i<n;i++){
            int a=s.nextInt();
            root=insert(root,a);
        }

        int target=s.nextInt();
        System.out.println(path(root,target));


    }
}