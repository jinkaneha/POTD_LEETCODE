#include <iostream>
#include <stack>
#include <string>

class Solution {
public:
    std::string reverseParentheses(std::string s) {
        stack<string> st;
        string current;

        for (char c:s) {
            if (c=='(') {
                st.push(current);
                current = "";
            } else if (c==')') {
                reverse(current.begin(), current.end());
                if (!st.empty()) {
                    current=st.top()+current;
                    st.pop();
                }
            } else {
                current+=c;
            }
        }
        return current;
    }
};

 