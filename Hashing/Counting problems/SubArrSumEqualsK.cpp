//Given an integer array nums and an integer k, 
//find the number of subarrays whose sum is equal to k.

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

    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }

    unordered_map<int, int> count;
    count[0] = 1;

    int ans = 0, curr = 0;
    for (int num : nums) {
        curr += num;
        ans += count[curr - k];
        count[curr]++;
    }
    cout << "number of subarrays whose sum is equal to k = " << k <<" is " << ans << endl;
}
