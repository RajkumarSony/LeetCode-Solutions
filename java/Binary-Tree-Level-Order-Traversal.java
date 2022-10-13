/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        if(root == null){
            return new ArrayList<>();
        }
        List<List<Integer>> list = new ArrayList<>();
        Queue<TreeNode> que = new ArrayDeque<>();
        que.add(root);
        int count = 1;
        while(que.size() != 0){
            List<Integer> level = new ArrayList<>();
            while(count-->0){
                TreeNode rn = que.remove();
                level.add(rn.val);
                if(rn.left != null){
                    que.add(rn.left);
                }
                if(rn.right != null){
                    que.add(rn.right);
                }
            }
            list.add(level);
            count = que.size();
        }
        return list;
    }
}