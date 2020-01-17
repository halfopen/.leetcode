/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ret;
        if (nullptr == root) return ret;
        queue<int, list<TreeNode>> q;

        q.push(*root);

        while(!q.empty()) {
            int size = q.size();
            vector<int> item;
            for(int i=0;i<size;i++) {
                TreeNode node = q.front();
                item.push_back(node.val);
                if (nullptr != node.left) {
                    q.push(*node.left);
                }

                if (nullptr != node.right) {
                    q.push(*node.right);
                }

                q.pop();
            }
            ret.push_back(item);
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
// @lc code=end

