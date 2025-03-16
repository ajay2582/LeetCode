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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int cnta = 0;
        int cntb = 0;
        ListNode *temphb = headB;
        ListNode *tempha = headA;

        ListNode *currb = headB;

        ListNode *curra = headA;

        while( curra != NULL || currb != NULL) {
            if( curra != NULL) {

            cnta++;
            curra = curra ->next ;
            }
            if( currb != NULL) {
            cntb++;
            currb = currb ->next ;

            }

        }

      
        if( cntb > cnta) {
            int ans1 = cntb - cnta;
            for( int i = 0 ;i < ans1; i++){
                temphb = temphb ->next ;

            }
        }
       else  if( cnta > cntb) {
            int ans2 = cnta - cntb;
            for( int i = 0 ; i< ans2; i++ ){
                tempha = tempha ->next ;

            }
        }

        while(tempha ) {
           
              
            
            if( tempha  == temphb ) {
                    return tempha;


            }
            else {
                tempha = tempha ->next ;
                temphb = temphb ->next ;

            }
        }

        return NULL;





        
    }
};