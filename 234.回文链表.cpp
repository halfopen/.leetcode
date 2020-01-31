/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    bool isPalindrome(ListNode* head) {
        if (nullptr == head || nullptr == head->next) return true;
        ListNode *fast = head, *slow = head;
        ListNode *p, *pre = nullptr;
        while(nullptr != fast && nullptr != fast->next) {
            p = slow;
            slow = slow->next;
            fast = fast->next->next;

            p->next = pre; // 翻转
            pre = p;
        }
        if (fast) {
            slow = slow->next;
        }

        while(nullptr != p) {
            if (p->val != slow->val) return false;
            p = p->next;
            slow = slow->next;
        }
        return true;
    }
};
// @lc code=end

