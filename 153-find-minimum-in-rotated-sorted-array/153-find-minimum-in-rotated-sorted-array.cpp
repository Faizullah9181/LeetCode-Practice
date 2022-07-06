class Solution
{
    public:

        int findMin(vector<int> &nums)
        {

            int n = nums.size();

            int s = 0;
            int e = n - 1;

            if (n == 1) return nums[0];

            if (nums[0] < nums[e])   //if array is already sorted
                return nums[0];

            while (s < e)
            {
                int mid = s + (e - s) / 2;

                if (nums[mid] >= nums[0])
                {

                    s = mid + 1;
                }
                else
                {

                    e = mid;
                }
            }

            return nums[s];
        }
};