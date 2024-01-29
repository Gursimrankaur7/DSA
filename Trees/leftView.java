import java.util.*;

class node {
    int data;
    node left;
    node right;

    node(int d) {
        this.data = d;
        this.left = null;
        this.right = null;
    }
}

class leftView {
    static Scanner s = new Scanner(System.in);
    public static int maxLevel = 0;

    public static node insert(node root, int d) {
        if (root == null) {
            node nn = new node(d);
            return nn;
        }
        if (d < root.data) {
            root.left = insert(root.left, d);
        } else if (d > root.data) {
            root.right = insert(root.right, d);
        } else {
            return root;
        }
        return root;
    }

    public static void preorder(node root) {
        if (root == null) {
            return;
        }
        System.out.print(root.data);
        preorder(root.left);
        preorder(root.right);
    }

    public static void left(node root) {
        if (root == null)
            return;
        Queue<node> q = new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            int l = q.size();
            for(int i=0;i<l;i++){
                node nn = q.poll();
                if(i==0){
                    System.out.print(nn.data+" ");
                }
                if(nn.left!=null){
                    q.add(nn.left);
                }
                if(nn.right!=null){
                    q.add(nn.right);
                }
            }
        }
    }

    public static void right(node root){
          if(root==null)
          return;
          Queue<node> q= new LinkedList<>();
          q.add(root);
          while(!q.isEmpty()){
            int l=q.size();
            for(int i=0;i<l;i++){
                node nn = q.poll();
                if(i==0){
                    System.out.println(nn.data);
                }
                if(nn.left!=null)
                q.add(nn.left);
                if(nn.right!=null)
                q.add(nn.right);
            }
          }
    }

    public static void printLevel(node root, int level) {
        if (root == null)
            return;
        if (level == 1) {
            System.out.println(root.data);
        } else if (level > 1) {
            
            printLevel(root.left, level - 1);
            printLevel(root.right, level - 1);
        }

    }

    public static void level(node root) {
        int n = height(root);
        for (int i = 1; i <= n; i++) {
            printLevel(root, i);
        }
    }

    public static void levelOrder(node root) {
        if (root == null)
            return;
        Queue<node> q = new LinkedList<>();
        q.add(root);
        q.add(null);
        while (!q.isEmpty()) {
            node nn = q.poll();
            if (nn == null) {
                System.out.println();
                if (!q.isEmpty()) {
                    q.add(null);
                }
            } else {
                System.out.print(nn.data + " ");
                if (nn.left != null) {
                    q.add(nn.left);
                }
                if (nn.right != null) {
                    q.add(nn.right);
                }
            }
        }
    }

    public static int height(node root) {
        if (root == null)
            return 0;
        int left = height(root.left);
        int right = height(root.right);

        int ans = Math.max(left, right) + 1;
        return ans;

    }

    public static void main(String args[]) {
        int n = s.nextInt();
        node root = null;
        for (int i = 0; i < n; i++) {
            int a = s.nextInt();
            root = insert(root, a);
        }
        // preorder(root);
        levelOrder(root);
        // level(root);
        left(root);
        System.out.println();
        right(root);
        // System.out.println(height(root));
    }
}