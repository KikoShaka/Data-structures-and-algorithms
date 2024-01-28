//A pangram is a sentence where every letter 
//of the English alphabet appears at least once.

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
