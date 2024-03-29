/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode() : val(0), next(nullptr) {}
 *   ListNode(int x) : val(x), next(nullptr) {}
 *   ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        int getDecimalValue(ListNode *head)
        {
           	//             vector<int> v;
           	//             while (head != NULL)
           	//             {
           	//                 v.push_back(head->val);
           	//                 head = head->next;
           	//             }

           	//             int ans = 0;
           	//             for (int i = 0; i < v.size(); i++)
           	//             {
           	//                 ans += v[i] *pow(2, v.size() - i - 1);
           	//             }

           	//             return ans;

            int res=0;

            while (head != NULL)
            {

                res = res*2 + head->val;

                head = head->next;
            }

            return res;
        }
};