//Given an integer array nums, return the largest integer
//that only occurs once. If no integer occurs once, return -1.
int largestUniqueNumber(vector<int>& nums) {
        map<int, int> counts;
        int ans = -1;
        for(int num: nums){
            counts[num]++;
        }
        for(auto [key, val]: counts){
            if(val == 1 && key > ans){
                 ans = key;
            }
        }
        return ans;
    }
