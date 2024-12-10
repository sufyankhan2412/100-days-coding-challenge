class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;  
        int left = 0;  
        int maxlen = 0;  
        
        for (int right = 0; right < s.length(); right++) {
            while (charSet.find(s[right]) != charSet.end()) {
                charSet.erase(s[left]);
                left++;
            }
            
            charSet.insert(s[right]);
            
            maxlen = max(maxlen, right - left + 1);
        }
        
        return maxlen; 
    }
};
