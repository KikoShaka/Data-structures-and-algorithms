//Given an array of strings strs, group the anagrams together.

//For example, given strs = ["eat","tea","tan","ate","nat","bat"], 
//return [["bat"],["nat","tan"],["ate","eat","tea"]].

//Solution: ///////////////////////////////////////////////////////////////////
//If we have a string "bcab", then sort it, we have "abbc".                   /
//This is its "identifier" because every anagram of "bcab"                    /
//will also result in "abbc" when sorted. We can use the identifier           / 
//of each string as a hash map key to easily group all the anagrams together. /
///////////////////////////////////////////////////////////////////////////////
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (string& s: strs) {
            string t = s;
            sort(t.begin(), t.end());
            groups[t].push_back(s);
        }
        
        vector<vector<string>> ans;
        for (auto [key, val]: groups) {
            ans.push_back(val);
        }
        
        return ans;
    }
