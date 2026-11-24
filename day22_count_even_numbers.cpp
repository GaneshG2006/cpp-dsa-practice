#include <iostream>
#include <vector>
using namespace std;

// Count the even numbers in an array.
int countEvenNumbers(const vector<int>& nums) {
    int count = 0;

    for (int value : nums) {
        if (value % 2 == 0) {
            ++count;
        }
    }

    return count;
}

int main() {
    vector<int> nums = {10, 21, 32, 43, 54, 65};

    cout << "Even numbers: " << countEvenNumbers(nums) << endl;

    return 0;
}
