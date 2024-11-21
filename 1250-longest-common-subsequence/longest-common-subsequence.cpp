class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int dp[t1.size()+1][t2.size()+1];
        for(int i=0;i<t1.size()+1;i++){
            for(int j=0;j<t2.size()+1;j++){
                if(i==0||j==0){
                    dp[i][j]=0;
                }else if(t1[i-1]==t2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }

        }
        
        return dp[t1.size()][t2.size()];
    }
};