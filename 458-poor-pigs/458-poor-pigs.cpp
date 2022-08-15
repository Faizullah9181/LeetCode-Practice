class Solution
{
    public:

        int poorPigs(long double buckets, long double poisonTime, long double totalTime)
        {
            return ceil(log(buckets) / log(totalTime / poisonTime + 1));
        }
};