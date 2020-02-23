/*
 * @lc app=leetcode.cn id=671 lang=cpp
 *
 * [671] 二叉树中第二小的节点
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
    long secondmin = __INT32_MAX__ + 1L;
    int temp;
    int firstmin;
    int findSecondMinimumValue(TreeNode* root) {
       if(!root)
           return -1;
        firstmin = root -> val;
        return select(root);
            
    }
    
    int select(TreeNode* root)
    {
         if(!root)
            return secondmin;
       
        if(root -> val > firstmin && root -> val < secondmin)
            secondmin = root -> val;
        select(root -> left);
        select(root -> right);
        return secondmin == __INT32_MAX__ + 1L? -1 : secondmin;
    }
};
// @lc code=end

