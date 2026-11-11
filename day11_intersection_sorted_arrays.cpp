#include <iostream>
#include <vector>
using namespace std;

// Find the intersection of two sorted arrays.
vector<int> intersectionSorted(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < static_cast<int>(a.size()) && j < static_cast<int>(b.size())) {
        if (a[i] == b[j]) {
            if (result.empty() || result.back() != a[i]) {
                result.push_back(a[i]);
            }
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 2, 3, 5};
    vector<int> b = {2, 2, 3, 4, 5};

    vector<int> result = intersectionSorted(a, b);
    cout << "Intersection: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
