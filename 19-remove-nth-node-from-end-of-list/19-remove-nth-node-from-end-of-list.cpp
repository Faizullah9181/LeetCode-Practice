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
        ListNode* removeNthFromEnd(ListNode *head, int n)
        {

            ListNode *ptr = head;

            int len = 0;

            while (ptr)
            {

                len++;

                ptr = ptr->next;
            }

            if (len == n)
                return head->next;

            ptr = head;
            ListNode *temp = head;

            for (int i = 0; i < len - n; i++)
            {

                ptr = ptr->next;

                if (i != 0)

                    temp = temp->next;
            }

            temp->next = ptr->next;
            delete(ptr);

            return head;
        }
};