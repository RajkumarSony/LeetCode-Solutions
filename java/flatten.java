class Solution {
    
     // static TreeNode prev = null; 
    
    public void flatten(TreeNode root) {
        TreeNode cur = root;
        
        while(cur != null){
            if(cur.left!= null){
                TreeNode pre = cur.left;
                while(pre.right != null){
                    pre= pre.right;
                }
                pre.right = cur.right;
                cur.right= cur.left;
                cur.left = null;
            }
            cur = cur.right;
        }
        
        
    }
}