#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool containsDuplicate(const vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int x : arr) {
        if (freq[x] > 0) return true;
        freq[x]++;
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 5};
    cout << (containsDuplicate(arr) ? "Duplicate found" : "No duplicate") << endl;
    return 0;
}
