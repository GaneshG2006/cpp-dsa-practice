#include <iostream>
#include <vector>
using namespace std;

// Move all zeroes to the end while keeping non-zero elements in order.
void moveZeroes(vector<int>& nums) {
    int nextNonZero = 0;

    for (int value : nums) {
        if (value != 0) {
            nums[nextNonZero++] = value;
        }
    }

    while (nextNonZero < static_cast<int>(nums.size())) {
        nums[nextNonZero++] = 0;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);

    cout << "After moving zeroes: ";
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
