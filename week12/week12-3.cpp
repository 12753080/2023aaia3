///week12-3.cpp�ǲ߭p�e Linked List �Ĥ@�D(����)
///LeetCode 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* ans = new ListNode(0);
       ListNode* now = ans;
       while(list1 != nullptr || list2 != nullptr){
            if(list1==nullptr){///����O�Ū�
                now->next = list2;///�N��k������W
                break;///�����F
            }else if(list2==nullptr){///�k��O�Ū�
                now->next = list1;///�N�⥪������W
                break;///�����F
            }else if(list1 ->val < list2->val){///����p
                now->next = new ListNode(list1->val);///�p���A��J
                list1 = list1->next;///���U�@��
                now = now->next;///���ײ{�b�]���U�@��
            }else{///list2����p
                now->next = new ListNode(list2->val);///�p���A��J
                list2 = list2->next;///���U�@��
                now = now->next;///���ײ{�b�]���U�@��
            }
       }
        return ans->next; ///ans�O�ť]�u�A�U�@���~�O�u������
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