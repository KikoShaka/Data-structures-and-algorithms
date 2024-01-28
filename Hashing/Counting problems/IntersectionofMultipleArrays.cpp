//Given a 2D array nums that contains n arrays of distinct integers, 
//return a sorted array containing all the numbers that appear in all n arrays.

//For example, given nums = [[3,1,2,4,5],[1,2,3,4],[3,4,5,6]], 
//return [3, 4]. 3 and 4 are the only numbers that are in all arrays.
vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> counts;
        for (vector<int>& arr: nums) {
            for (int x: arr) {
                counts[x]++;
            }
        }
        
        int n = int(nums.size());
        vector<int> ans;
        for (auto [key, val]: counts) {
            if (val == n) {
                ans.push_back(key);
            }
        }
        
        sort(ans.begin(), ans.end());
        return ans;
  }
