/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N叉树的前序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
private:
    vector<int> ans;
public:
    vector<int> preorder(Node* root) {
        dfs(root);
        return ans;
    }

    void dfs(Node* root) {
        if (nullptr == root)
            return;
        ans.push_back(root->val);
        for(auto node : root->children) {
            dfs(node);
        }
    }
};
// @lc code=end

