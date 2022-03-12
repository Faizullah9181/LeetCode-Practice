/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
            if(head==NULL)
                    return head;
     unordered_map<Node*,Node*>mp;
            Node* curr=head;
            Node* newhead=NULL;
            Node* newtail=NULL;
            while(curr)
            {
                    Node* temp=new Node(curr->val);
                    if(newhead==NULL)
                    {
                            newhead=temp;
                            newtail=temp;
                    }
                    else
                    {
                            newtail->next=temp;
                            newtail=newtail->next;
                    }
                    mp[curr]=temp;
                    curr=curr->next;
            }
            curr=newhead;
            Node*temp=head;
            while(curr)
            {
                    Node* nxt=mp[temp->random];
                    curr->random=nxt;
                    curr=curr->next;
                    temp=temp->next;
            }
            return newhead;
    }
};