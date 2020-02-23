/*
 * @lc app=leetcode.cn id=1022 lang=cpp
 *
 * [1022] 从根到叶的二进制数之和
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
    void sumRootToLeafDFS(TreeNode* root, int path_sum, int& all_path_sum){
		if(!root) return;
		path_sum = (path_sum << 1) + root->val;
		if(!root->left && !root->right){
			//cout << "path_sum = " << path_sum << endl;
			all_path_sum += path_sum;
			return;
		}
		sumRootToLeafDFS(root->left, path_sum, all_path_sum);
		sumRootToLeafDFS(root->right, path_sum, all_path_sum);
	}
    int sumRootToLeaf(TreeNode* root) {
    	int path_sum = 0;
    	int all_path_sum = 0;
    	sumRootToLeafDFS(root, path_sum, all_path_sum);
    	return all_path_sum;
    }
};
// @lc code=end

