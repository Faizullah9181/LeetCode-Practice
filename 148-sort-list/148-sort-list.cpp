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

//By using Merge sort
class Solution {
public:
     ListNode* sortList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* slow=head;ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* list2=slow->next;
        slow->next=NULL;
        ListNode* list1=head;
        list1=sortList(list1);
        list2=sortList(list2);
        ListNode* ResList=mergeSort(list1,list2);
        return ResList;
    }
    ListNode* mergeSort(ListNode* list1,ListNode* list2){
        if(list1==NULL){
            return list2;
        } 
        if(list2==NULL){
            return list1;
        }
        ListNode* temp;
        if(list1->val<=list2->val){
            temp=list1;
            temp->next=mergeSort(list1->next,list2);
        }
        else{
            temp=list2;
            temp->next=mergeSort(list1,list2->next);
        }
        return temp;
    }
        
        
        
        
    
};