#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {12, 5, 8, 3, 9};
    int maxValue = arr[0];

    for (int x : arr) {
        if (x > maxValue) maxValue = x;
    }

    cout << "Maximum element: " << maxValue << endl;
    return 0;
}
