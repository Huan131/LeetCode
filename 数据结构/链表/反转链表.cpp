/*
输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL
*/


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
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = head;
        ListNode* pre = nullptr;
        ListNode* next;
        while(cur){
            next = cur->next;
            
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }
};
