#include <iostream>
#include <vector>
using namespace std;

// Find the maximum element in an array.
int findMax(const vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int maximum = nums[0];
    for (int value : nums) {
        if (value > maximum) {
            maximum = value;
        }
    }

    return maximum;
}

int main() {
    vector<int> nums = {12, 45, 7, 89, 23, 56};

    cout << "Maximum element: " << findMax(nums) << endl;

    return 0;
}
