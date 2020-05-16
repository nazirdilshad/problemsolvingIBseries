int helper(int a,int b, int dp[][1000]){
    if(a==1 || b==1){
        return 1;
    }
    if(dp[a][b]!=-1){
        return dp[a][b];
    }
    int x = helper(a-1,b,dp);
    int y = helper(a,b-1,dp);
    return dp[a][b] = x+y;
}
int Solution::uniquePaths(int A, int B) {
    int dp[1000][1000];
    memset(dp,-1,sizeof dp);
    return helper(A,B,dp);
}
