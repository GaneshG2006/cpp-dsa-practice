#include <iostream>
#include <vector>
using namespace std;

// Check if an array is sorted in non-decreasing order.
bool isSorted(const vector<int>& nums) {
    for (int i = 1; i < static_cast<int>(nums.size()); ++i) {
        if (nums[i] < nums[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 4};

    cout << (isSorted(nums) ? "Sorted" : "Not sorted") << endl;
    return 0;
}
