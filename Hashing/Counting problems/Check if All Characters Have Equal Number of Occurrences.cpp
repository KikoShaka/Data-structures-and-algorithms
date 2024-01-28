//Given a string s, determine if all characters have the same frequency.

//For example, given s = "abacbc", return true. All characters appear 
//twice. Given s = "aaabb", return false. "a" appears 3 times, "b" appears 2 times. 3 != 2.
bool areOccurrencesEqual(string s) {
        unordered_map<char, int> counts;
        for (char c: s) {
            counts[c]++;
        }
        
        unordered_set<int> frequencies;
        for (auto [key, val]: counts) {
            frequencies.insert(val);
        }
        
        return frequencies.size() == 1;
    }
