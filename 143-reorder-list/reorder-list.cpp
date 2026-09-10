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


    void generate( ListNode*& curr ,  ListNode * end ,bool &stop ){
        if(end == NULL) return ;
        generate(curr , end->next , stop);

        if(curr == NULL ||stop) return  ;
         if (curr == end ||curr->next == end){
            end->next = NULL;
            stop = true;
            return;
         }   

       
        ListNode* next = curr->next;
        curr->next = end;
        end ->next = next;
        curr = next;
       
        }


    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL) return ;
       
         ListNode* curr =head;
         bool stop = false;
        generate( curr, head, stop );
    }
};