//Given an integer array nums, find all the 
//unique numbers x in nums that satisfy the 
//following: x + 1 is not in nums, and x - 1 is not in nums.
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> findNumbers(vector<int>& nums) {
    vector<int> ans;
    unordered_set<int> numsSet(nums.begin(), nums.end());

    for (int num : nums) {
        if (numsSet.find(num + 1) == numsSet.end() && numsSet.find(num - 1) == numsSet.end()) {
            ans.push_back(num);
        }
    }

    return ans;
}

int main() {
    vector<int> nums;
    int num;
  
    while (cin >> num) {
        nums.push_back(num);
    }
    vector<int> result = findNumbers(nums);
  
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
  
    return 0;
}

