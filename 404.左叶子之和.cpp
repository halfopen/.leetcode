/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
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
    int ans;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root, false);
        return ans;
    }

    void dfs(TreeNode* root, bool isLeft) {
        if (nullptr == root) return;
        if (nullptr == root->left && nullptr == root->right && isLeft) { // 左叶子节点
            ans += root->val;
        }
        dfs(root->left, true);
        dfs(root->right, false);
    }
};
// @lc code=end

