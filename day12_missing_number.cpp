#include <iostream>
#include <vector>
using namespace std;

// Find the missing number in a sorted array of 1..n.
int missingNumber(const vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int x : nums) {
        actualSum += x;
    }

    return expectedSum - actualSum;
}

int main() {
    vector<int> nums = {1, 2, 4, 5, 6};
    cout << "Missing number: " << missingNumber(nums) << endl;
    return 0;
}
