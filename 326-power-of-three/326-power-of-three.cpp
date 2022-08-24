class Solution
{
    public:
        bool isPowerOfThree(int n)
        {
           	//             int k = pow(3,19);

           	//             return n > 0 && k % n == 0;

            if (n < 1) return false;

            while (n % 3 == 0)
            {

                n /= 3;
            }

            return n == 1;
        }
};