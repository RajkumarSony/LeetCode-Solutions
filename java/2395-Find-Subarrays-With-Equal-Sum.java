import java.util.Set;
import java.util.HashSet;

//2395. Find Subarrays With Equal Sum

class Solution {
    public boolean findSubarrays(int[] nums) {
        Set<Integer> set = new HashSet<>(); //  To Track previous sum calculated 
        
        for(int i=1; i < nums.length; i++){
            set.add(nums[i] + nums[i-1]);
        }
        //   Check if sum already exist 
        return set.size() != (nums.length -1);            
    }
}