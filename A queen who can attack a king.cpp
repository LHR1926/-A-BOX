class Solution 
{
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) 
    {
        vector<vector<int>> a(8, vector<int>(8, 0));
        for (vector<int> v: queens)
        {
            int r = v[0],   c = v[1];   //queue的位置 置1
            a[r][c] = 1;
        }
        vector<vector<int>> res;

        vector<vector<int>> dirs = {{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};
        for (auto v: dirs)              //遍历8个方向
        {
            int r = king[0],    c = king[1];
            int dr = v[0],  dc = v[1];
            int nr = r + dr,    nc = c + dc;
            while (0 <= nr && nr < 8 && 0<= nc && nc < 8)   //沿着这个方向一直找下去  找到越界
            {
                if (a[nr][nc] == 1)
                {
                    res.push_back({nr, nc});
                    break;
                }
                nr = nr + dr;           //沿着这个方向一直找
                nc = nc + dc;
            }
        }
        return res;
    }
};