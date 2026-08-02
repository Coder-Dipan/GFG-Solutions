class Solution {
  public:
    int solve(int idx, int prev, int n, int m, vector<vector<int>> &dp){
        //base case
        if(idx == n) return 1;
        
        if(dp[idx][prev] != -1) return dp[idx][prev];
        
        int ans = 0;
        
        for(int i = 1; i <= m; i++){
            if(prev == 0) {
                ans += solve(idx + 1, i, n, m, dp);
            } else if((prev % i == 0) || (i % prev == 0)){
                ans += solve(idx + 1, i, n, m, dp);
            }
        }
        
        return dp[idx][prev] = ans;
    }
    
    int count(int n, int m) {
        // code here
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        
        return solve(0, 0, n, m, dp);
    }
};