class Solution
{
    public:
        bool isPalindrome(int x)
        {
            string s = to_string(x);

            int n = s.size();

            int st = 0, e = n - 1;

            while (st < e)
            {

                if (s[st] != s[e])
                {

                    return false;
                }
                else
                {
                    st++;

                    e--;
                }
            }

            return true;
        }
};