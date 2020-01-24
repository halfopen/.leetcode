/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
 */

// @lc code=start
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
    bool isSymmetric(TreeNode* root) {
        if (nullptr == root) return true;
        
        return helper(root->left, root->right);
    }

    bool helper(TreeNode* left, TreeNode* right) {
        if (nullptr==left && nullptr== right) return true;
        if (nullptr==left || nullptr==right) return false;
        return left->val == right->val && 
            helper(left->left, right->right) &&
            helper(left->right, right->left);
    }
};
// @lc code=end

