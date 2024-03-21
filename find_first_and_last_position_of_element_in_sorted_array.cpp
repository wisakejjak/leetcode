/* Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. */

/* If target is not found in the array, return [-1, -1]. */

/* You must write an algorithm with O(log n) runtime complexity. */

class Solution
{
	public:
    	vector<int> searchRange(vector<int>& nums, int target)
		{
        	int begin = -1, end = -1;
        	for (int i = 0; i < nums.size(); ++i)
			{
            	if (nums[i] == target)
				{
                	if (begin == -1)
                    	begin = i;
                	end = i;
            	}
        	}
        	return {begin, end};
    	}
};
