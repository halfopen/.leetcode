/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    bool ret = true;
    bool isBalanced(TreeNode* root) {
        if (nullptr == root) return true;
        height(root);
        return ret;
    }

    int height(TreeNode *root) {
        if (nullptr == root || ret == false) return 0;
        int l = height(root->left);
        int r = height(root->right);
        if (l - r > 1 || r - l > 1)ret=false;
        return max(l, r)+1;
    }

    
};
// @lc code=end

