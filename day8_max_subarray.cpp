#include <iostream>
#include <vector>
using namespace std;

// Kadane's algorithm: find the largest sum of a contiguous subarray.
int maxSubarraySum(const vector<int>& nums) {
    int currentSum = nums[0];
    int bestSum = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        currentSum = max(nums[i], currentSum + nums[i]);
        bestSum = max(bestSum, currentSum);
    }

    return bestSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum: " << maxSubarraySum(nums) << endl;
    return 0;
}
