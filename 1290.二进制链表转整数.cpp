/*
 * @lc app=leetcode.cn id=1290 lang=cpp
 *
 * [1290] 二进制链表转整数
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if (nullptr == head) return 0;
        int ret = 0;

        while( nullptr != head) {
            ret = ret *2 + head->val;
            head = head-> next;
        }
        return ret;
    }
};
// @lc code=end

