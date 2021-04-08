class Solution {
public:
    int brokenCalc(int X, int Y) {
        int ans = 0;
        int t = Y;
        while (t > X){
            if ((t &1) == 0){
                ans += 1;
                t = t >> 1 ;               
            }
            else{
                ans += 2;
                t += 1;
                t = t >> 1;
            }            
        }
        ans += X - t;
        return a   ns;
    }
};
