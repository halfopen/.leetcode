/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
    int ret = 0;
    int maxDepth(TreeNode* root) {
        dfs(root, 0);
        return ret;
    }

    void dfs(TreeNode * node, int depth) {
        if (nullptr == node) return;
        if (nullptr != node->left) dfs(node->left, depth + 1);
        if (nullptr != node->right) dfs(node->right, depth + 1);
        ret = max(ret, depth+1);
    }
};
// @lc code=end

