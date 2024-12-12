//week14-1.cpp學習計畫 Linked List第三題 兩數相加 最多100位
//LeetCode 2 .Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        while(l1 != nullptr){
            now -> next = new ListNode(l1->val);
            now = now->next;
            l1 = l1->next;
        }
        return ans->next;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
