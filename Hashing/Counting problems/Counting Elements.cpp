//Given an integer array arr, count how many 
//elements x there are, such that x + 1 is also in arr. 
//If there are duplicates in arr, count them separately.

int countElements(vector<int>& arr) {
        unordered_set<int> us(arr.begin(), arr.end());
        int count=0;
        for(int i: arr){
            if(us.find(i+1)!=us.end()){
                count++;
            }
        }
        return count;
    }
