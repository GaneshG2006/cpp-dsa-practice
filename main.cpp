#include <iostream>
#include <vector>
using namespace std;

// Binary Search
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

// Recursion: factorial
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    vector<int> nums = {2, 5, 8, 12, 16, 23, 38, 45, 57};

    cout << "Array: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    int target = 23;
    int index = binarySearch(nums, target);
    if (index != -1) {
        cout << target << " found at index " << index << endl;
    } else {
        cout << target << " not found" << endl;
    }

    cout << "Factorial of 5 = " << factorial(5) << endl;

    return 0;
}
