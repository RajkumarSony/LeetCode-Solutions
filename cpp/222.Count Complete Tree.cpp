/*
    QUE:  Given the root of a complete binary tree, return the number of the nodes in the tree.
          Design an algorithm that runs in less than O(n) time complexity.

    Eg:         1
              /   \
            2       3
          /  \     /
        4    5    6
        
        input : root = [1,2,3,4,5,6]
        output : 6

*/



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    
    int findleft(TreeNode* node){
        int height =0;
        while(node){
            height++;
            node= node->left;
        }
        return height;
    }
    
    int findright(TreeNode* node){
        int height =0;
        while(node){
            height++;
            node= node->right;
        }
        return height;
    }
    
    int countNodes(TreeNode* root) {
        
        if(root == NULL) return 0;
        
        int lft = findleft(root);
        int rgt = findright(root);
        
        
        if(lft == rgt) return (1<<lft)-1;
        
        return (1+countNodes(root->left) + countNodes(root->right));
  
    }

    
};
