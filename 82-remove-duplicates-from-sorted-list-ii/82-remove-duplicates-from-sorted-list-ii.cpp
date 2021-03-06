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
        ListNode* deleteDuplicates(ListNode* head) {
            if(head==NULL ||head->next==NULL)
                return head;
            ListNode *tail= new ListNode();
            ListNode* newhead=tail;
            while(head!=NULL){
                if(head->next!=NULL && head->val==head->next->val){
                    int curr=head->val;
                    head=head->next;
                    while(head && head->val==curr)
                        head=head->next;
                }else{
                    tail->next=head;
                    tail=tail->next;
                    head=head->next;
                }
            }
            tail->next=NULL;
            return newhead->next;
        }
    };