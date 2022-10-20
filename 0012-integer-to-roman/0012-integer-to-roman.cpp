class Solution
{
    public:
        string intToRoman(int num)
        {

            unordered_map<int, string> mp;
            mp[1] = "I";
            mp[5] = "V";
            mp[10] = "X";
            mp[50] = "L";
            mp[100] = "C";
            mp[500] = "D";
            mp[1000] = "M";

            mp[4] = "IV";
            mp[9] = "IX";
            mp[40] = "XL";

            mp[90] = "XC";
            mp[400] = "CD";
            mp[900] = "CM";

            string ans = "";
            int i = 1;
            while (num > 0)
            {
                int rem = num % 10;
                num /= 10;
                if (rem == 4 || rem == 9)
                {
                    ans = mp[rem *i] + ans;
                }
                else if (rem >= 5)
                {
                    ans = mp[5 *i] + string(rem - 5, mp[i][0]) + ans;
                }
                else
                {
                    ans = string(rem, mp[i][0]) + ans;
                }
                i *= 10;
            }
            return ans;
        }
};