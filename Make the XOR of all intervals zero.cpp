class Solution {
public:
    int minChanges(vector<int>& nums, int k) {
        unordered_map<int, int> number_freq;
        vector<int> dp_pre(1024, INT_MAX);
        vector<int> dp(1024, INT_MAX);
        for (int i = 0; i < k; ++i)
        {
            int size = 0;
            dp_pre = dp;
            int min_dp_pre = *min_element(dp_pre.begin(), dp_pre.end());
            number_freq.clear();
            for (int j = i; j < nums.size(); j += k)
            {
                ++number_freq[nums[j]];
                ++size;
            }
            for (int j = 0; j < 1024; ++j)
            {
                dp[j] = min_dp_pre;
            }
            for (auto change = number_freq.begin(); change != number_freq.end(); ++change)
            {
                for (int j = 0; j < 1024; ++j)
                {
                    dp[j] = min(dp[j], 
                                i == 0 ? 
                                    (j == change->first ? -change->second : 0) : 
                                    dp_pre[j ^ change->first] - change->second);
                }
            }
            for (int j = 0; j < 1024; ++j)
            {
                dp[j] += size;
            }
        }
        return dp[0];
    }
};