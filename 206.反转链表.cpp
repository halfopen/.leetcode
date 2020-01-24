/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode* reverseList2(ListNode* head) {
        ListNode* p = head, *next = nullptr, *current = nullptr;

        while(nullptr != p) {
            next = p->next;
            p->next = current;
            current = p;
            p = next;
        }
        return current;
    }

    ListNode* reverseList(ListNode* head) {
        if (nullptr == head || nullptr == head->next) return head;
        ListNode *p = reverseList(head->next);

        head->next->next = head;
        head->next = NULL;
        return p;
    }
};
// @lc code=end

