import java.util.HashMap;
import java.util.Map;

//1512. Number of Good Pairs
class Solution {
    public int numIdenticalPairs(int[] nums) {
        int res = 0;
        Map<Integer,Integer> count= new HashMap<Integer,Integer>();
        for (int a: nums)
        {
            int cur=count.getOrDefault(a,0);
            res += cur;
            count.put(a,cur+1);
        }
        return res;
    }
}