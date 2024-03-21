/* Implement pow(x, n), which calculates x raised to the power n (i.e., xn). */

class Solution
{
public:
    double myPow(double x, int n)
	{
    	if (n == 0)
            return 1;
        if (n == 1)
            return x;
        double result = 1.0;
        long long exp = n;
        if (n < 0)
		{
            x = 1 / x;
            exp = -exp;
        }
        while (exp > 0)
		{
            if (exp % 2 == 1)
			{
                result *= x;
            }
            x *= x;
            exp /= 2;
        }
        return result;
    }
};

