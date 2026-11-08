#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(const string& s) {
    stack<char> brackets;

    for (char ch : s) {
        if (ch == '(' || ch == '[' || ch == '{') {
            brackets.push(ch);
            continue;
        }

        if (brackets.empty()) return false;

        char open = brackets.top();
        brackets.pop();
        if ((ch == ')' && open != '(') ||
            (ch == ']' && open != '[') ||
            (ch == '}' && open != '{')) {
            return false;
        }
    }

    return brackets.empty();
}

int main() {
    string input = "{[()]}";
    cout << (isValid(input) ? "Valid parentheses" : "Invalid parentheses") << endl;
    return 0;
}
