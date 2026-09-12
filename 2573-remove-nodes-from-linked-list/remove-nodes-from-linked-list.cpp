class Solution { 
public: 
    ListNode* solve(ListNode* curr){ 
        if(curr == NULL || curr->next == NULL){ 
            return  curr; 
        } 

         curr->next = solve(curr->next); 
        if(curr->next != NULL && curr->val < curr->next->val){ 
            return curr->next;
        } 
        return curr; 
 
    } 
    ListNode* removeNodes(ListNode* head) { 
      return solve (head); 
        
    } 
}; 