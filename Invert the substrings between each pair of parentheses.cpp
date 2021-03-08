class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> stack;
        string cur;
        for (char c : s) {
            if (c == '(') {
                stack.push(cur);
                cur = "";
            } else if (c == ')') {
                reverse(cur.begin(), cur.end());
                cur = stack.top() + cur;
                stack.pop();
            } else {
                cur += c;
            }
        }

        return cur;
    }
};