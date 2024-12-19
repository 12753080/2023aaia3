///week15-4.cpp 學習計畫 Linked List 第四題要用到上周第三題(加起來)、上上周第二題(倒過來)
///LeetCode 445. Add Two Numbers II
class Solution {
public:
    ListNode* myReverse(ListNode* l1) {
        vector<int> a;
        while(l1 != nullptr){
            a.push_back(l1->val);
            l1 = l1->next;
        }
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        int N = a.size();
        for(int i=N-1; i>=0; i--){
           now->next = new ListNode(a[i]);
           now = now->next;
        }
        return ans->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        return myReverse(l1);
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
