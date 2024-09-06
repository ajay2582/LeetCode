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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        int n = nums.size();
        ListNode * temp = head;
         bool flag = false;
        ListNode *temp2 = NULL;
        ListNode *temp3 = NULL;
        sort(nums.begin() , nums.end());
        while(head != NULL){
            int value = temp->val;
            if(binary_search(nums.begin(), nums.end() , value) == true){
                //matlab present hain
                if(flag == true){
                    temp3->next = head->next;
                }
                head = head->next;
                temp = head;


            }
            else {
                // matlab present nahi hain 
                if(flag == false){

                 temp2 = head;
                 temp3 = head;
                 flag = true;
                }
                temp3 = head;
                head = head ->next;
                temp = head;

            }


        }
        return temp2;

        
        
    }
};