class Solution
{
    public:

        int searchInsert(vector<int> &nums, int target)
        {

            int start = 0;

            int mid;

            int n = nums.size();
            int end = n - 1;
            while (start <= end)
            {
                mid = start + (end - start / 2);
                if (nums[mid] == target)
                {
                    return mid;
                }
                else if (target < nums[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }

           return nums[mid] < target ? mid + 1: mid;
        }
};