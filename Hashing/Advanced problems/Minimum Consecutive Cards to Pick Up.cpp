//Given an integer array cards, find the length of 
//the shortest subarray that contains at least one 
//duplicate. If the array has no duplicates, return -1.

int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int> dic;
        int ans = INT_MAX;
        
        for (int i = 0; i < cards.size(); i++) {
            if (dic.find(cards[i]) != dic.end()) {
                ans = min(ans, i - dic[cards[i]] + 1);
            }
            
            dic[cards[i]] = i;
        }
        
        return ans == INT_MAX ? -1 : ans;
    }
