#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "hello";
    int left = 0, right = s.size() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }

    cout << "Reversed string: " << s << endl;
    return 0;
}
