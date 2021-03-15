class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int n = cost.size();
        vector<int> pre(n);
        pre[0] = 1;
        for(int i=1;i<n;i++){
            if(s[i] == s[i-1]) pre[i] = pre[i-1] + 1;
            else pre[i] = 1;
        }
        int all,maxn,ans = 0;
        for(int i=n-1;i>=0;i-=pre[i]){
            all = 0,maxn = 0;
            for(int j=i-pre[i]+1;j<=i;j++){
                all += cost[j];
                maxn = max(maxn,cost[j]);
            }
            ans += all - maxn;
        }
        return ans;
    }
};