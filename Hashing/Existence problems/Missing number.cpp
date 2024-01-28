//Given an array nums containing n distinct 
//numbers in the range [0, n], return the only number 
//in the range that is missing from the array.

int missingNumber(vector<int>& nums) {
        unordered_set<int> ui(nums.begin(), nums.end());
        
        
        for(int i=0;i<nums.size()+1;++i){
            if(ui.find(i)==ui.end()){
                return i;
            }
        }
        
        return -1;
    }
