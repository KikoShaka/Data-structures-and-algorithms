//Given an array of positive integers nums and an integer k. 
//Find the number of subarrays with exactly k odd numbers in them.

//For example, given nums = [1, 1, 2, 1, 1], k = 3, the answer is 2. 
//The subarrays with 3 odd numbers in them are [1, 1, 2, 1] and [1, 2, 1, 1].
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int k, n;
    cout << "k = ";
    cin >> k;
    cout << "Size of arr = ";
    cin >> n;

    vector<size_t> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    unordered_map<int, int> count;
    count[0] = 1;

    int ans = 0, curr = 0;
    for (int num : nums) {
        curr += num % 2;
        ans += count[curr - k];
        count[curr]++;
    }

    cout << "Number of subarrays with exactly " << k << " odd numbers in them is " << ans << endl;

    // Print counts stored in the count unordered map
    cout << "Counts in the 'count' map: " << endl;
    for (const auto& pair : count) {
        cout << "Count[" << pair.first << "] = " << pair.second << endl;
    }

    return 0;
}
