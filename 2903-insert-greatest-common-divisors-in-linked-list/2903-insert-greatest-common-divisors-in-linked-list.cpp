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
    int gcd(int a, int b) 
{ 
     
    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 
  
     
    if (a == b) 
        return a; 
  
    
    if (a > b) 
        return gcd(a - b, b); 
    return gcd(a, b - a); 
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        ListNode* ans = head;
        while(temp->next != NULL){
            int val = temp->val;
            int valnex = temp->next->val;
            int res = gcd( val , valnex);
            ListNode *mak = new ListNode(res);
            mak->next = temp->next;
            temp->next = mak;
            temp = temp ->next ->next;

        }
        return ans;     
    }
};