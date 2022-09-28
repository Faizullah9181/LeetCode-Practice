/**
 *Definition for singly-linked list.
 *struct ListNode {
 *  int val;
 *  ListNode * next;
 *  ListNode() : val(0), next(nullptr) {}
 *  ListNode(int x) : val(x), next(nullptr) {}
 *  ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* insertionSortList(ListNode *head)
        {

            vector<int> v;

            while (head != NULL)
            {

                v.push_back(head->val);

                head = head->next;
            }

            sort(v.begin(), v.end());

            ListNode *newHead = new ListNode();
            ListNode *temp = newHead;

           	// ListNode *ptr = head;

            for (int i = 0; i < v.size(); i++)
            {
                newHead->next = new ListNode(v[i]);
                newHead = newHead->next;
            }
            
            newHead= temp->next;
            
            delete temp;
            temp = NULL;

            return newHead;
        }
};