class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> sum(n + 1, vector<int>(m + 1));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        }
        int ans = 0;
        for (int top = 1; top <= n; top++) {
            for (int bot = top; bot <= n; bot++) {
                int cur = 0;
                unordered_map<int, int> map;
                for (int r = 1; r <= m; r++) {
                    cur = sum[bot][r] - sum[top - 1][r];
                    if (cur == target) ans++;
                    if (map.count(cur - target)) ans += map[cur - target];
                    map[cur]++;
                }
            }
        }
        return ans;
    }
};