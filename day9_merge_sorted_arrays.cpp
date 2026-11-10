#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSorted(const vector<int>& a, const vector<int>& b) {
    vector<int> merged;
    int i = 0, j = 0;

    while (i < static_cast<int>(a.size()) && j < static_cast<int>(b.size())) {
        if (a[i] <= b[j]) {
            merged.push_back(a[i]);
            i++;
        } else {
            merged.push_back(b[j]);
            j++;
        }
    }

    while (i < static_cast<int>(a.size())) {
        merged.push_back(a[i]);
        i++;
    }

    while (j < static_cast<int>(b.size())) {
        merged.push_back(b[j]);
        j++;
    }

    return merged;
}

int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6};

    vector<int> merged = mergeSorted(a, b);

    cout << "Merged array: ";
    for (int x : merged) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
