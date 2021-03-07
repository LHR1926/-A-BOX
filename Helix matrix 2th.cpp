class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));// 结果矩阵
        int i = 0;
        int j = 0;// （i，j）指示当前所在格子
        res[i][j] = 1;// 进入第一个格子，即左上角格子
        while(res[i][j] != n * n)// 终止条件
        {
            while(j + 1 < n && 0 == res[i][j + 1])// 判断是否可以向右前进
            {
                res[i][j + 1] = res[i][j] + 1;
                ++j;// 向右前进一格并填充数据
            }
            while(i + 1 < n && 0 == res[i + 1][j])// 判断是否可以向下前进
            {
                res[i + 1][j] = res[i][j] + 1;
                ++i;// 向下前进一格并填充数据
            }
            while(j - 1 >= 0 && 0 == res[i][j - 1])// 判断是否可以向左前进
            {
                res[i][j - 1] = res[i][j] + 1;
                --j;// 向左前进一格并填充数据
            }
            while(i - 1 >= 0 && 0 == res[i - 1][j])// 判断是否可以向上前进
            {
                res[i - 1][j] = res[i][j] + 1;
                --i;// 向上前进一格并填充数据
            }
        }
        return res;// 所有格子均走完，返回结果矩阵
    }
};