#include <iostream>
#include <vector>
using namespace std;

// Find the union of two sorted arrays without duplicates.
vector<int> unionSorted(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < static_cast<int>(a.size()) && j < static_cast<int>(b.size())) {
        if (a[i] < b[j]) {
            if (result.empty() || result.back() != a[i]) result.push_back(a[i]);
            i++;
        } else if (b[j] < a[i]) {
            if (result.empty() || result.back() != b[j]) result.push_back(b[j]);
            j++;
        } else {
            if (result.empty() || result.back() != a[i]) result.push_back(a[i]);
            i++;
            j++;
        }
    }

    while (i < static_cast<int>(a.size())) {
        if (result.empty() || result.back() != a[i]) result.push_back(a[i]);
        i++;
    }

    while (j < static_cast<int>(b.size())) {
        if (result.empty() || result.back() != b[j]) result.push_back(b[j]);
        j++;
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 2, 3, 5};
    vector<int> b = {2, 3, 4, 5, 6};

    vector<int> result = unionSorted(a, b);
    cout << "Union: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
