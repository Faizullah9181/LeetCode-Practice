class Solution
{
    public:
        string minWindow(string s, string t)
        {
            int ns = s.length(), nt = t.length();
            int c = 0, beg = 0;
            int mn = INT_MAX, in = -1;
            int i;
            int f[256] = { 0 };

            for (i = 0; i < nt; i++)
                f[t[i]]++;

            for (i = 0; i < ns; i++)
            {
                f[s[i]]--;

                if (f[s[i]] >= 0)
                    c++;

                while (c == nt && beg <= i)
                {
                    if (i - beg + 1 < mn)
                    {
                        mn = i - beg + 1; in = beg;
                    }

                    f[s[beg]]++;
                    if (f[s[beg]] > 0)
                        c--;

                    beg++;
                }
            }

            if (mn == INT_MAX)
                return "";

            return s.substr(in, mn);
        }
};