#include <iostream>
#include <vector>
using namespace std;

// Find and print the largest element in an array.
int findLargest(const vector<int>& nums) {
    int largest = nums[0];

    for (int value : nums) {
        if (value > largest) {
            largest = value;
        }
    }

    return largest;
}

int main() {
    vector<int> nums = {12, 45, 7, 89, 23};

    cout << "Largest number: " << findLargest(nums) << endl;

    return 0;
}
