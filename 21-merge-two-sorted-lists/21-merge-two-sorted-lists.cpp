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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head,*curr;
        if(l1 == NULL)
            return l2;
        else if(l2 == NULL)
            return l1;
        if(l1->val > l2->val){
            head = l2;
            l2=l2->next;
        }
        else{
            head = l1;
            l1 = l1->next;
        }
        
        curr = head;
        while(l1 && l2){
            if(l1->val <= l2->val ){
                curr->next = l1;
                curr = curr->next;
                l1 = l1->next;
            }
            else{
                curr->next = l2;
                curr = curr->next;
                l2 = l2->next;
            }
                
        }
    while(l1 || l2){
        if(l1){
            curr->next = l1;
            curr = curr->next;
            l1 = l1->next;
        }
        else{
            curr->next = l2;
            curr = curr->next;
            l2 = l2->next;
        }
    }
    return head;
    
        
    }
};