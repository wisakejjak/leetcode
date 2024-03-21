/* Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well. */

/* You must not use any built-in exponent function or operator. */

/* For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python. */

class Solution 
{
	public:
    	int mySqrt(int x)
		{
        	if (x == 0)
            	return 0;
        	double root = 600; // choose your fighter
        	for (int i = 0; i < 10; i++)
			{
            	root = 0.5*(root + x/root);
        	}
        	return floor(root);
    	}
}; // Babylonian method?
