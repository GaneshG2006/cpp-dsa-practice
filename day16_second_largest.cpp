#include <iostream>
#include <optional>
#include <vector>
using namespace std;

// Return the second-largest distinct value, if one exists.
optional<int> secondLargest(const vector<int>& nums) {
    optional<int> largest;
    optional<int> second;

    for (int value : nums) {
        if (!largest || value > *largest) {
            if (largest && value != *largest) {
                second = largest;
            }
            largest = value;
        } else if (value < *largest && (!second || value > *second)) {
            second = value;
        }
    }

    return second;
}

int main() {
    vector<int> nums = {12, 35, 1, 10, 34, 1};
    optional<int> result = secondLargest(nums);

    if (result) {
        cout << "Second-largest distinct value: " << *result << endl;
    } else {
        cout << "No second-largest distinct value" << endl;
    }

    return 0;
}
