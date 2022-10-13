class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        
        List<Integer> ans = new ArrayList<>();
        helper(root, ans);
        return ans;
        
        
    }
    
    private void helper(TreeNode root, List<Integer> ans){
        if(root == null) return ;
        
        ans.add(root.val);
        helper(root.left, ans);
        helper(root.right, ans);
    }
}