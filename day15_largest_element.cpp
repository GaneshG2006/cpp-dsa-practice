#include <iostream>
#include <vector>
using namespace std;

// Find the largest element in an array.
int largestElement(const vector<int>& nums) {
    int largest = nums[0];
    for (int value : nums) {
        if (value > largest) {
            largest = value;
        }
    }
    return largest;
}

int main() {
    vector<int> nums = {4, 7, 2, 9, 1, 6};
    cout << "Largest element: " << largestElement(nums) << endl;
    return 0;
}
