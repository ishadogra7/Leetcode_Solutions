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
    bool isPalindrome(ListNode* head) {
                // .......approach 1......
                /*
      // count no. of nodes//
       ListNode* temp = head;
       int count =0;
       while( temp !=NULL ){
         temp= temp->next;
         count++;
       }
       
       //only 1 node given//
        if(head ==NULL || head->next == NULL) return true;
       
       //reverse the node till count/2  //
       int half  = count/2;
       ListNode* prev = NULL;
       ListNode* rev = head;
        for(int i = 0; i < half; i++) {
           ListNode* next = rev->next;
           rev->next  = prev;
           prev = rev;
           rev = next;
        }

        // if number of nodes --- even or odd //
        ListNode* tempt=prev;
        if(count %2 !=0){
           rev = rev->next; 
        }
        // comparison between forward loop and revere loop
        while(rev != NULL && tempt != NULL ){
            if(tempt->val == rev->val){
                tempt = tempt->next;
                rev = rev->next ;

            }
            else return false;
        }
        return true;       */

                        // .......approach 2......
        
        ListNode*slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* previous = NULL;
        while(slow != NULL){
            ListNode *next = slow->next;

            slow->next = previous;
            previous = slow;
            slow = next;
        }

        while(previous != NULL){
           if(head->val != previous->val)return false;

           head = head->next;
           previous = previous->next;

        }
        return true;
    }
};