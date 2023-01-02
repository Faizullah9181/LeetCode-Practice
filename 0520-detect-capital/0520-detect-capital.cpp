class Solution
{
    public:
        bool detectCapitalUse(string word)
        {

            int count = 0;
            for (int i = 0; i < word.size(); i++)
            {
                if (word[i] >= 'A' && word[i] <= 'Z')
                {
                    count++;
                }
            }

            if (count == word.size() || count == 0)
            {
                return true;
            }
            else if (count == 1 && word[0] >= 'A' && word[0] <= 'Z')
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};