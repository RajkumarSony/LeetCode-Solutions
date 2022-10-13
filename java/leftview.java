class Tree
{
    //Function to return list containing elements of left view of binary tree.
    ArrayList<Integer> leftView(Node root)
    {
      
      ArrayList<Integer> ans = new ArrayList<>();
      leftSideView(root, ans, 0);
      return ans;
      
    }
    
    public void leftSideView(Node curr, List<Integer> ans , int currDepth){
        if(curr== null) return ;
        
        if(currDepth == ans.size()){
            ans.add(curr.data);
        }
        leftSideView(curr.left, ans, currDepth +1);
        leftSideView(curr.right, ans, currDepth +1);
        
    }
    
}