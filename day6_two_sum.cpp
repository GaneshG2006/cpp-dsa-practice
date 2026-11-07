#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Return the indices of two values whose sum equals target.
// This solution runs in O(n) average time and uses O(n) extra space.
vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int, int> indexByValue;

    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        int needed = target - nums[i];
        auto match = indexByValue.find(needed);
        if (match != indexByValue.end()) {
            return {match->second, i};
        }
        indexByValue[nums[i]] = i;
    }

    return {}; // No pair found.
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> answer = twoSum(nums, target);

    if (answer.empty()) {
        cout << "No pair found" << endl;
    } else {
        cout << "Indices: " << answer[0] << ", " << answer[1] << endl;
    }

    return 0;
}
