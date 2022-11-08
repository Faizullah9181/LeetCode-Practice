class Solution
{
    public:
        string makeGood(string s)
        {
            string ans = "";	
            for (auto i: s)
            {
                if (ans.size() != 0)
                {
                    char temp = ans.back();
                    char check = i;
                    if ((temp - 'a' == check - 'A') || (check - 'a' == temp - 'A'))
                    {
                    	
                        ans.pop_back();
                    }
                    else
                    {
                        ans += i;
                    }
                }
                else
                {
                    ans += i;	
                }
            }
            return ans;
        }
};