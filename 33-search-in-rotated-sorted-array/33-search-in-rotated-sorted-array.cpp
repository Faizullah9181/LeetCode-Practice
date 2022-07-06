class Solution
{
    public:
        int getpivot(vector<int> nums)
        {

            int n = nums.size();

            int s = 0;
            int e = n - 1;

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
            return s;
        }

    int binary(vector<int> nums, int s, int e, int k)
    {

        int n = nums.size();
        int start = s;

        int end = e;
        
        while (s<=e)
        {
                int mid = s + (e - s) / 2;

            
            if (nums[mid] == k)
            {
                return mid;
            }
            if (k > nums[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int> &nums, int target)
    {

        int n = nums.size();
        int pvt = getpivot(nums);

        if (target >= nums[pvt] && target <= nums[n - 1])
        {
            return binary(nums, pvt, n - 1, target);
        }
        else

            return binary(nums, 0, pvt - 1, target);
    }
};