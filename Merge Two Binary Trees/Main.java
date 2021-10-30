import java.util.LinkedList;
import java.util.Deque;

public class Main {
    public static class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {  }
        TreeNode(int x) { 
            val = x;
            left = null;
            right = null;
        }
        TreeNode(int x, TreeNode left, TreeNode right) {
            val = x;
            this.left = left;
            this.right = right;
        }
    }
    
    public static TreeNode merge_trees(TreeNode r1, TreeNode r2) {
        if(r1 == null) return r2;
        if(r2 == null) return r1;

        TreeNode result = new TreeNode(r1.val + r2.val);
        result.left = merge_trees(r1.left, r2.left);
        result.right = merge_trees(r1.right, r2.right);

        return result;
    } 

    public static void breadth_first_traversal(TreeNode r) {
        Deque<TreeNode> q = new LinkedList<TreeNode>(); 
        TreeNode temp = r;

        while(temp != null) {
            System.out.print(temp.val + " ");
            q.addLast(temp.left);
            q.addLast(temp.right);
            temp = q.peekFirst();
            q.removeFirst();
        }
    }

    public static void main(String[] args) {
        TreeNode r1 = new TreeNode(1);
        r1.left = new TreeNode(3);
        r1.right = new TreeNode(2);
        r1.left.left = new TreeNode(5);

        TreeNode r2 = new TreeNode(2);
        r2.left = new TreeNode(1);
        r2.right = new TreeNode(3);
        r2.left.left = new TreeNode();
        r2.left.right = new TreeNode(4);
        r2.right.left = new TreeNode();
        r2.right.right = new TreeNode(7);

        TreeNode r3 = merge_trees(r1, r2);
        breadth_first_traversal(r3);
    }
}
