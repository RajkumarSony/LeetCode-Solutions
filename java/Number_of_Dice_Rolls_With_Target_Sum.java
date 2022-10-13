
public class Number_of_Dice_Rolls_With_Target_Sum {
	    int[][] dp;
	    public int numRollsToTarget(int n, int k, int target) {
	      
	        dp = new int[n + 1][target + 1];
	        for(int[] row : dp){
	            Arrays.fill(row, -1);
	        }
	        return helper(n, k, target);
	    }
	    public int helper(int n, int k, int target){
	        if(n == 0 && target == 0){
	            return 1;
	        }
	        if(n == 0 || target < 0) return 0;
	        
	        if(dp[n][target] != -1)return dp[n][target];
	        int ways = 0;
	        for(int i = 1; i <= k && target >= i; i++){
	            ways = (ways + helper(n - 1, k, target - i)) % 1000000007;
	        }
	        return dp[n][target] = ways % 1000000007;
	    }   
}
