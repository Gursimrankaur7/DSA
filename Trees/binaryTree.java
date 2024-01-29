import java.util.*; 

class Node {
    int data;
    Node left;
    Node right;

    Node(int d) {
        this.data = d;
        this.left = null;
        this.right = null;
    }
}

public class binaryTree {
    static Scanner s = new Scanner(System.in);

    public static Node buildTree() {
        System.out.println("Enter data: ");
        int data = s.nextInt();

        if (data == -1) {
            return null;
        }

        Node root = new Node(data);

        System.out.println("Enter data for left of " + data);
        root.left = buildTree();

        System.out.println("Enter data for right of " + data);
        root.right = buildTree();

        return root;
    }

    public static void levelOrderTraversal(Node root) {
        if (root == null) {
            return;
        }

        Queue<Node> queue = new LinkedList<>();
        queue.offer(root);

        while (!queue.isEmpty()) {
            int levelSize = queue.size();

            for (int i = 0; i < levelSize; i++) {
                Node temp = queue.poll();
                System.out.print(temp.data + " ");

                if (temp.left != null) {
                    queue.offer(temp.left);
                }
                if (temp.right != null) {
                    queue.offer(temp.right);
                }
            }
            System.out.println();
        }
    }

    public static void reverseLevelOrderTraversal(Node root) {
        if (root == null) {
            return;
        }

        Stack<Node> stack = new Stack<>();
        Queue<Node> queue = new LinkedList<>();
        queue.offer(root);

        while (!queue.isEmpty()) {
            Node temp = queue.poll();
            stack.push(temp);

            if (temp.right != null) {
                queue.offer(temp.right);
            }
            if (temp.left != null) {
                queue.offer(temp.left);
            }
        }

        while (!stack.isEmpty()) {
            Node st = stack.pop();
            System.out.print(st.data + " ");
        }
    }

    public static void main(String[] args) {
        Node root;
        System.out.println("Enter the root of the tree (-1 for no node): ");
        root = buildTree();

        System.out.println("Level Order Traversal:");
        levelOrderTraversal(root);
        System.out.println("\n");

        System.out.println("Reverse Level Order Traversal:");
        reverseLevelOrderTraversal(root);
    }
}
