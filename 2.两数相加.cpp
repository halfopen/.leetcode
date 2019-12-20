/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (nullptr == l1 || nullptr == l2) return nullptr;

        ListNode head(0), *p = &head;
        int carry = 0, l1_val = 0, l2_val = 0;
        while(nullptr != l1 || nullptr != l2 || carry) {
            l1_val = nullptr == l1? 0: l1->val;
            l2_val = nullptr == l2? 0: l2->val;

            int sum = l1_val + l2_val + carry;
            carry = sum / 10;

            p->next = new ListNode(sum%10);
            p = p->next;

            l1 = nullptr== l1? nullptr: l1->next;
            l2 = nullptr== l2? nullptr: l2->next;

        }


        return head.next;
    }
};
// @lc code=end

