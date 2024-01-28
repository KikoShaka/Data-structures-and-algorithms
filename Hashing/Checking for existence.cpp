//Given an array of integers nums and an integer target, return indices
//of two numbers such that they add up to target. You cannot use the same index twice.

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> dic;
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int complement = target - num;
        if (dic.find(complement) != dic.end()) {
            return { i, dic[complement] };
        }

        dic[num] = i;
    }

    return { -1, -1 };
}

int main() {
    // Example usage of the twoSum function
    // Test case
    vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    // Find indices of the two numbers that add up to the target
    vector<int> result = twoSum(nums, target);

    // Display the result
    if (result[0] != -1 && result[1] != -1) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    }
    else {
        cout << "No such indices found." << endl;
    }

    return 0;
}

