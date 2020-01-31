/*
 * @lc app=leetcode.cn id=590 lang=cpp
 *
 * [590] N叉树的后序遍历
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
    vector<int> postorder(Node* root) {
        dfs(root);
        return ans;
    }

    void dfs(Node* root) {
        if (nullptr == root)
            return;
        
        for(auto node : root->children) {
            dfs(node);
        }
        ans.push_back(root->val);
    }
};
// @lc code=end

