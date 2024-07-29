#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ch1;
        stack<char> ch2;

        for (char c : s) {
            if (c == '#') {
                if (!ch1.empty()) {
                    ch1.pop();
                }
            } else {
                ch1.push(c);
            }
        }

        for (char c : t) {
            if (c == '#') {
                if (!ch2.empty()) {
                    ch2.pop();
                }
            } else {
                ch2.push(c);
            }
        }

        while (!ch1.empty() && !ch2.empty()) {
            if (ch1.top() != ch2.top()) {
                return false;
            }
            ch1.pop();
            ch2.pop();
        }

        return ch1.empty() && ch2.empty();
    }
};
