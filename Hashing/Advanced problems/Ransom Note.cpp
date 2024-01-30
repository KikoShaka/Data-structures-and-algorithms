//Given two strings ransomNote and magazine, return true 
//if ransomNote can be constructed by using the letters 
//from magazine and false otherwise.

//Each letter in magazine can only be used once in ransomNote.

bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map;
        for(auto ch:magazine)
            map[ch]++;
        
        for(auto ch:ransomNote)
            map[ch]--;
        
        for(auto it:map)
            if(it.second<0)
                return false;
        return true;
        
    }
