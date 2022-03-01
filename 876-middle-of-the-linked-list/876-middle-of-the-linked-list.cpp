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

int getlen(ListNode* head){
     int len =0;
    while(head != NULL){
       
        len++;
        head=head->next;
        
    }
    return len;
}
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len =getlen(head);
        int ans= (len/2);  //if we have to give position than +/1
        int cnt=0;
        
        ListNode* temp=head;
        while(cnt<ans){
            temp=temp->next;
            cnt++;
            
        }
        return temp;
    }
};