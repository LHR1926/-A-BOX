class Solution {
public:
    string smallestSubsequence(string text) {
        string ret = "";
        int len = text.length();
        int all = 0;
        for (int i = 0; i < len; i++) {
            all |= (1 << (text[i] - 'a'));
        }
        int pos = 0;
        while (all) {
            for (int i = 0; i < 26; i++) {
                if ((all & (1 << i)) && isOk(text, all, i+'a', pos)) {
                    ret.push_back(i+'a');
                    all ^= (1 << i);
                    break;
                }
            }
        }
        return ret;
    }

    bool isOk(string& text, int all, char ch, int& pos) {
        int len = text.length();
        int i = pos;
        for (; i < len; i++) {
            if (text[i] == ch) {
                break;
            }
        }
        int p = i+1;
        int t = 0;
        for (; i < len; i++) {
            if (all & (1 << (text[i]-'a'))) {
                t |= (1 << (text[i]-'a'));
            }
        }
        if (t == all) {
            pos = p;
            return true;
        }
        return false;
    }
};