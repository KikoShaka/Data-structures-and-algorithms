//Given a string s, find the length of the 
//longest substring without repeating characters.
int lengthOfLongestSubstring(string s) {      
        int n = s.length();
        int maxLength = 0;
        unordered_map<char, int> map;
        int left = 0, index = 0;
        
        for (char ch: s) {
            if (map.find(ch) == map.end() || map[ch] < left) {
                map[ch] = index;
                maxLength = max(maxLength, index - left + 1);
            } else {
                left = map[ch] + 1;
                map[ch] = index;
            }
            index++;
        }      
        return maxLength;  
}
