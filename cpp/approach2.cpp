class Solution {
public:
    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int l = 0, r = vec.size()-1;
        while (l < r) {
            if (vec[l] + vec[r] == k) return true;
            else {
                if (vec[l] + vec[r] < k) l++;
                else r--;
            }
        }
        return false;
    }
    
private:
    vector<int> vec;
};