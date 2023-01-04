class Solution
{
    public:
        int minimumRounds(vector<int> &tasks)
        {

            unordered_map<int, int> ump;

            int count = 0;
            for (int i = 0; i < tasks.size(); i++)
            {

                ump[tasks[i]]++;
            }

            for (auto i: ump)
            {

                if (i.second <= 1)
                {

                    return -1;
                }
                else
                {

                    count += ceil(i.second / 3.0);
                }
            }

            return count;
        }
};