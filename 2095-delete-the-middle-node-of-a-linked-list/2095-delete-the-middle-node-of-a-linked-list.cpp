/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        int getcount(ListNode *head)
        {
            ListNode *temp = head;
            int count = 0;
            while (temp != NULL )
            {
                count++;
                temp = temp->next;
            }
            return count / 2;
        }
    ListNode* deleteMiddle(ListNode *head)
    {
        if (head->next == NULL)
        {
            return NULL;
        }
        int mid = getcount(head);
        ListNode *temp = head;
        for (int i = 0; i < mid - 1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        return head;
    }
};