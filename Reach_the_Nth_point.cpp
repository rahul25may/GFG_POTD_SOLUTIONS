class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    long long int dp[n+1];
		    dp[0]=1;
		    dp[1]=1;
		    dp[2]=2;
		    long long int mod = 1000000007;
		    for(long long int i=3;i<=n;i++){
		        dp[i] = (dp[i-1]+dp[i-2])%mod;
		    }
		    return dp[n];
		}
};
