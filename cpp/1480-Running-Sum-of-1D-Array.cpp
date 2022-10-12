/*

Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.

 Ex:
    Input: nums = [1,2,3,4]
    Output: [1,3,6,10]

 Explanation:
    1.Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
    2.We keep a sum variable to store the prefix sum and keep pushing the sum variable into the ans vector after the sum varibale is updated.

 Time: O(n)
 Space: O(n)
 
*/

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> ans;
        long long sum = 0;
        for (auto i : nums)
        {
            sum += i;
            ans.push_back(sum);
        }
        return ans;
    }
};