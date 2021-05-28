class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for (int i = 0; i < 30; ++i)
        {
            int numOne = 0;
            for (int num : nums)
            {
                numOne += (num >> i) & 1;
            }
            res += numOne * (n-numOne);
        }

        return res;
    }
};