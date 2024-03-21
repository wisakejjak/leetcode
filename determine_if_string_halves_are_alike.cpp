/* You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half. */
/* Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters. */
/* Return true if a and b are alike. Otherwise, return false. */

class Solution
{
	public:
    	bool isVowel(char letter)
		{
        	if (letter == 'a') return true;
        	if (letter == 'A') return true;
        	if (letter == 'o') return true;
        	if (letter == 'O') return true;
        	if (letter == 'u') return true;
        	if (letter == 'U') return true;
        	if (letter == 'i') return true;
        	if (letter == 'I') return true;
        	if (letter == 'e') return true;
        	if (letter == 'E') return true;
        	return false;
    	}
    	bool halvesAreAlike(string s)
		{
        	int left = 0;
        	int right = 0;
        	for (int i = 0; i < s.length()/2; i++)
			{
            	if (isVowel(s[i]))
					left++;
        	}
        	for (int i = s.length()/2; i < s.length(); i++)
			{
            	if (isVowel(s[i]))
					right++;
        	}
        	if (left == right)
				return true;
        	return false;
    	}
};
