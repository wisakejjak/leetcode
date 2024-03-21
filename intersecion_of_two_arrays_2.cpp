/* Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order. */

class Solution
{
	public:
    	vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
		{
        	vector<int> nums3;
        	if (nums1.size() < nums2.size())
            	nums2.swap(nums1);
        	for(int i = 0; i < nums1.size(); i++)
            	for(int j = 0; j < nums2.size(); j++)
                	if(nums1[i] == nums2[j])
					{
                    	nums3.push_back(nums1[i]);
                    	nums1[i] = -1;
                    	nums2[j] = -1;
                    	break;
                	}
        return nums3;
    	}
};
