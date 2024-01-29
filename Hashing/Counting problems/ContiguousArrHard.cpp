//Given a binary array nums, return the maximum length 
//of a contiguous subarray with an equal number of 0 and 1.
int findMaxLength(vector<int>& nums) {
        map<int, int> counts;
        counts[0] = -1;
        int ans = 0, curr = 0;
  
        for (int index = 0; index < nums.size(); ++index) {
            
            if (nums[index] == 0) {
                curr -= 1;
            } else {
                curr += 1;
            }
            
            if (counts.find(curr) != counts.end()) {
                ans = max(ans, index - counts[curr]);
            } else {
                counts[curr] = index;
            }
        }
        
        return ans;
    }
