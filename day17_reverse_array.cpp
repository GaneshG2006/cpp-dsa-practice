#include <iostream>
#include <vector>
using namespace std;

// Reverse an array in place using two pointers.
void reverseArray(vector<int>& nums) {
    int left = 0;
    int right = static_cast<int>(nums.size()) - 1;

    while (left < right) {
        swap(nums[left], nums[right]);
        ++left;
        --right;
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    reverseArray(nums);

    cout << "Reversed array: ";
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
