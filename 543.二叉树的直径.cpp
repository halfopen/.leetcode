/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
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
private:
    int ans = 0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return ans;
    }

    int dfs(TreeNode* root) {
        if (nullptr == root) return 0;
        int l = dfs(root->left);
        int r = dfs(root->right);
        ans = max(ans, l + r);
        return max(l, r) + 1;
    }
};
// @lc code=end

