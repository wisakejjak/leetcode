/* Write a function to find the longest common prefix string amongst an array of strings. */

/* If there is no common prefix, return an empty string "". */

class Solution
{
	public:
    	string longestCommonPrefix(vector<string>& strs)
		{
        	sort(strs.begin(), strs.end());
        	string answer = "";
        	string left = strs[0];
        	string right = strs[strs.size()-1];
        	for (int i = 0; i < min(left.size(),right.size()); i++)
			{
            	if (left[i] != right[i])
                	return answer;
            	answer += left[i];
        	}
        	return answer;
    	}
};
