//Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

// Input: root = [3,1,4,null,2], k = 1
// Output: 1

class Solution {
public:
    void inorder(TreeNode* root, vector<int>&v){
        if(!root)
            return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>v;
        inorder(root, v);
        return v[k-1];
    }
};