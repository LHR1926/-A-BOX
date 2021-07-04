class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> Sums(2);
        int n = nums.size();
        int arr[10001]={}, sum[3]={};
        for (int i =0;i<n;i++)
        {
            arr[nums[i]]++;
            if (arr[nums[i]] == 2)
                sum[0]=nums[i];
            sum[2] += nums[i];
        }
        sum[1] =  n*(n+1) /2 - sum[2] +sum[0];
        Sums[0]=sum[0];
        Sums[1]=sum[1];
        return Sums;
    }
};