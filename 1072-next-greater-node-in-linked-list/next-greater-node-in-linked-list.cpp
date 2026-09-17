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
    vector<int> nextLargerNodes(ListNode* head) {
       vector<int>st;

       ListNode* curr = head;
    
    while(curr != NULL){
          ListNode *temp = curr->next;
        while(temp != NULL){
            if(curr->val < temp->val  ){
               st.push_back(temp->val);
               break;
            }
            temp = temp->next;
        }
        if(temp == NULL){
            st.push_back(0);
        } 
         curr = curr->next;
    }
     return st;  
    }
};