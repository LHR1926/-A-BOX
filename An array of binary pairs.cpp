class Solution {
public:
    bool canReorderDoubled(vector<int>& A) {
        map<int, int> cnt;
        int match;

        for(int i: A) cnt[i]++;
        for(auto i = cnt.begin(); i != cnt.end(); ++i)
        {
            if(i->second > 0)
            {
                if(i->first > 0)
                {
                    match = i->first * 2;
                }
                else
                {
                    if(i->first % 2) return false;
                    match = i->first / 2;
                }
                cnt[match] -= i->second;
                if(cnt[match] < 0) return false;
            }
        }

        return true;

    }
};