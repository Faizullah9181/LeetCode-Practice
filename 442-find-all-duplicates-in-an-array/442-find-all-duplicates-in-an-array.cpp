class Solution
{
    public:
        vector<int> findDuplicates(vector<int> &nums)
        {

            int max = *max_element(nums.begin(), nums.end());

            vector<int> freq(max + 1, 0);

            for (int i = 0; i < nums.size(); i++)
            {

                freq[nums[i]]++;
            }

            nums.clear();

            for (int i = 0; i < freq.size(); i++)
            {

                if (freq[i] > 1){
                    
                    nums.push_back(i);
                }
            }
            
            return nums;
        }
};