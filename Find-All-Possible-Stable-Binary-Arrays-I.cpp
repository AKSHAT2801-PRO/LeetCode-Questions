1class Solution {
2public:
3    int numberOfStableArrays(int zero, int one, int limit) {
4        const int MOD = 1e9+7;
5
6        vector<vector<vector<long long>>> dp(
7            zero+1, vector<vector<long long>>(one+1, vector<long long>(2,0))
8        );
9
10        for(int i=1;i<=min(limit,zero);i++) dp[i][0][0] = 1;
11        for(int j=1;j<=min(limit,one);j++) dp[0][j][1] = 1;
12
13        for(int i=0;i<=zero;i++){
14            for(int j=0;j<=one;j++){
15
16                for(int k=1;k<=limit && k<=i;k++){
17                    dp[i][j][0] = (dp[i][j][0] + dp[i-k][j][1]) % MOD;
18                }
19
20                for(int k=1;k<=limit && k<=j;k++){
21                    dp[i][j][1] = (dp[i][j][1] + dp[i][j-k][0]) % MOD;
22                }
23            }
24        }
25
26        return (dp[zero][one][0] + dp[zero][one][1]) % MOD;
27    }
28};