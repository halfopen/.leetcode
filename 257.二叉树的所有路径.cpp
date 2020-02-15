/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> res;
		if (root == nullptr) return res;

		binaryTreePaths(root, res, "");
		return res;
	}

	void binaryTreePaths(TreeNode * root, vector<string> & res, string path) {
		path += to_string(root->val);

		if (root->left == nullptr && root->right == nullptr) {
			res.push_back(path);
			return;
		}

		if (root->left) binaryTreePaths(root->left, res, path + "->");
		if (root->right) binaryTreePaths(root->right, res, path + "->");
	}
};
// @lc code=end

