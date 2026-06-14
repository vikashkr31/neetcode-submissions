class Solution {
public:
    int climb(int n, vector<int>& dp) {
        if(dp[n]!=-1) return dp[n];
        if(n==0) return 1;
        if(n == 1) return 1;
        return dp[n] = climb(n-1, dp) + climb(n-2, dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return climb(n, dp);
    }
};
