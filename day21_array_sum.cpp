#include <iostream>
#include <vector>
using namespace std;

// Calculate the sum of all elements in an array.
int arraySum(const vector<int>& nums) {
    int sum = 0;

    for (int value : nums) {
        sum += value;
    }

    return sum;
}

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};

    cout << "Array sum: " << arraySum(nums) << endl;

    return 0;
}
