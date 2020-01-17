/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode* root) {
        int ret = 0;
        if (nullptr == root) return ret;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int size = q.size();
            ret++; // level ++
            for(int i=0;i < size; ++i) {
                TreeNode* node = q.front();
                if (nullptr == node->left && nullptr == node->right) {
                    return ret;
                }
                if (nullptr != node->left)
                    q.push(node->left);
                if (nullptr != node->right)
                    q.push(node->right);
                q.pop();
            }
        }
        return ret;
    }
};
// @lc code=end

