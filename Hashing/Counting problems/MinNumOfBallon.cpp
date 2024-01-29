//Given a string text, you want to use the 
//characters of text to form as many instances of the word "balloon" as possible.

//You can use each character in text at most once. 
//Return the maximum number of instances that can be formed.
int maxNumberOfBalloons(string text) {
        unordered_map<char, int> counts;
        
        for(auto c: text){
            counts[c]++;
        }
        
        int minCount = INT_MAX;
        minCount = min(minCount, counts['b']);
        minCount = min(minCount, counts['a']);
        minCount = min(minCount, counts['l']/2);
        minCount = min(minCount, counts['o']/2);
        minCount = min(minCount, counts['n']);
        
        return minCount;
    }
