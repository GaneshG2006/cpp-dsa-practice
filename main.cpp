#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

// Day 1: Arrays
int findMax(const vector<int>& arr) {
    int mx = arr[0];
    for (int x : arr) {
        if (x > mx) mx = x;
    }
    return mx;
}

// Day 2: Strings
string reverseString(string s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;
}

// Day 3: Recursion
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Day 4: Sorting
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

// Day 5: Hashing
bool containsDuplicate(const vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int x : arr) {
        if (freq[x] > 0) return true;
        freq[x]++;
    }
    return false;
}

int main() {
    vector<int> nums = {3, 7, 2, 9, 5};
    cout << "Max element: " << findMax(nums) << endl;

    string word = "cpp";
    cout << "Reversed: " << reverseString(word) << endl;

    cout << "Factorial of 5: " << factorial(5) << endl;

    vector<int> sortMe = {5, 2, 9, 1, 7};
    bubbleSort(sortMe);
    cout << "Sorted: ";
    for (int x : sortMe) cout << x << " ";
    cout << endl;

    vector<int> dup = {4, 2, 5, 2, 9};
    cout << "Contains duplicate? " << (containsDuplicate(dup) ? "Yes" : "No") << endl;

    return 0;
}
