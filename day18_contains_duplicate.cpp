#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

// Check whether an array contains duplicate values.
bool containsDuplicate(const vector<int>& nums) {
    unordered_set<int> seen;

    for (int value : nums) {
        if (seen.find(value) != seen.end()) {
            return true;
        }
        seen.insert(value);
    }

    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};

    cout << (containsDuplicate(nums)
                 ? "Duplicates found"
                 : "No duplicates")
         << endl;

    return 0;
}
