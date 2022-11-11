class Solution
{
    public:
        int removeDuplicates(vector<int> &nums)
        {

            set<int> s;

            for (int i: nums)
            {

                s.insert(i);
            }

            nums.clear();

            for (auto i = s.begin(); i != s.end(); i++)
            {

                nums.push_back(*i);
            }

            return s.size();
        }
};