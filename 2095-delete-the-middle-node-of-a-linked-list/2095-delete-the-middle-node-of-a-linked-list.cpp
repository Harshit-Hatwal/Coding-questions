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
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* curr=head;
        if(curr->next==NULL)
        {
            delete(curr);    
            return NULL;
        }
        
        ListNode* slow=head;
        ListNode* fast=head;   //   1 3 4 7 1 2 6  herer the curr node is at
        ListNode* slowbehind=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {   slowbehind=slow;
            slow=slow->next;
            fast=fast->next->next;
            
        }
       slowbehind->next=slow->next;
        delete(slow);
        
        return curr;
        
        
        
        
        
    }
};