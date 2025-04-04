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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) {
            return NULL;

        }
        if(head ->next == NULL) {
            return head;

        }
        ListNode * prev =  nullptr;
        ListNode *temp1 = head->next;
        ListNode *temp2 = head;


        while(temp1 != NULL) {
            temp2->next = prev;
            prev = temp2;
            temp2 = temp1;

            temp1 = temp1->next;

        }

        temp2->next = prev;
        return temp2;




 



    }
};