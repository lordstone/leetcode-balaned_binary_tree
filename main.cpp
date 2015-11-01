/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    int findDepth(TreeNode* root){
        if(root == NULL) return 0;
        int left = findDepth(root -> left);
        int right = findDepth(root -> right);
        if (left == -1 || right == -1) return -1;
        if(abs(left - right) > 1) return -1;
        return left > right ? left + 1: right + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        return findDepth(root) == -1 ? false:true;
    }
};
