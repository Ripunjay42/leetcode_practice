class Solution {
public:
	int lengthOfLongestSubstring(string s) 
	{
		unordered_set<char> set;
    
		int i = 0, j = 0, n = s.size(), ans = 0;
    
		while( i<n && j<n)
		{
			if(set.find(s[i]) == set.end()) //If the character does not in the set
			{
				set.insert(s[i++]); //Insert the character in set and update the j counter
				ans = max(ans, i-j); //Check if the new distance is longer than the current answer
			}
			else
			{
				set.erase(s[j++]); 
				/*If character does exist in the set, ie. it is a repeated character, 
				we update the left side counter i, and continue with the checking for substring. */
			}
		}
    
		return ans;
	}
};