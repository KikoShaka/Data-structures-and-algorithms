bool checkIfPangram(string sentence) {
        unordered_set<char> alphabet;
        
        for(char ch='a';ch<='z';++ch){
            alphabet.insert(ch);
        }
        
        for(char ch: sentence){
            if(isalpha(ch)){
                alphabet.erase(tolower(ch));
            }
        }
        return alphabet.empty();
    }
}
