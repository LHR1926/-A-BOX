class Solution {
public:
    string reverseParentheses(string s) {
        if (!s.length()) return "";
        string strStack;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] != ')') {
                strStack += s[i];
            }
            else {
                string tempStr;
                while (strStack.back() != '(') {
                    tempStr += strStack.back();
                    strStack.pop_back();
                }
                strStack.pop_back();  
                strStack += tempStr;  
            }
        }
        return strStack;
    }
};