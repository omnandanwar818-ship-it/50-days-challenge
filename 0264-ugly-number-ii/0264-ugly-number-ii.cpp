class Solution {
public:
    int nthUglyNumber(int n) {
        if (n == 1) return 1;
        
        vector<int> dp(n);
        dp[0] = 1;
        
        int twoPos = 0, threePos = 0, fivePos = 0;
        
        for (int i = 1; i < n; ++i) {
            int next2 = dp[twoPos] * 2;
            int next3 = dp[threePos] * 3;
            int next5 = dp[fivePos] * 5;
            
            dp[i] = min({next2, next3, next5});
            
            if (dp[i] == next2) ++twoPos;
            if (dp[i] == next3) ++threePos;
            if (dp[i] == next5) ++fivePos;
        }
        
        return dp[n - 1];
    }
};
