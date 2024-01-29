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
class inoorderSucc {
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
    public static void suc(node root,ArrayList<Integer> a){
        if(root==null)
        return;
        suc(root.left,a);
        a.add(root.data);
        suc(root.right,a);
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        node root = null;
        for(int i=0;i<n;i++){
            int a = s.nextInt();
            root=insert(root,a);
        }

        int sc = s.nextInt();
        ArrayList<Integer> a=new ArrayList<>();
        suc(root,a);
        for(int i=0;i<a.size()-1;i++){
            if(a.get(i)==sc){
                System.out.println(a.get(i+1));
                return;
            }
        }

    }
}
