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
    ListNode* removeNthFromEnd(ListNode* head, int n) {


           if( head ->next == NULL)  {
               return  NULL;
           }
            ListNode *slow = head;
            ListNode *fast = head;
            ListNode *ans = head;
            for( int i = 1; i <= n; i++){
                fast = fast ->next ;
                if( fast == NULL) {

                    return ans -> next;

                }

            }
            while( fast->next != NULL) {
                slow = slow ->next;
                fast = fast ->next;
               
            }
                 ListNode *ght = slow -> next;

                 slow->next = slow ->next ->next;
                    delete( ght);
                    
             
                  return ans ;


        
    }
};

               

                   
              
          






           


                   
                  



          




