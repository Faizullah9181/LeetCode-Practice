class Solution
{
    public:
        string longestCommonPrefix(vector<string> &strs)
        {
            int n = strs.size();
            string str;
            sort(strs.begin(), strs.end());
            string first = strs[0];
            cout<<first;
            string last = strs[n - 1];
            for (int i = 0; i < first.size(); i++)
            {
                if (first[i] == last[i])
                {
                    str += first[i];
                }
                else
                    break;
            }
            return str;
        }
};