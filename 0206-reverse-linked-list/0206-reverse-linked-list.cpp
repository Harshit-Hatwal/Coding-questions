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
        
        ListNode *prev=NULL;
        ListNode *curr=head;
          ListNode *temp=NULL;
        while(curr!=NULL)
        {
             temp=curr->next;  // saving curr->next node pointer 
            curr->next=prev;  // ham  pointer prev assign kr rhe ha in curr->next  isse curr-next and temp ke beech mein link toot jayega .
            prev=curr; // prev ko ek point aage badhaya 
            curr=temp;  // curr ko bhi ek point aage 
        }
        return prev;  // returning the new head .
        
        
    }
};