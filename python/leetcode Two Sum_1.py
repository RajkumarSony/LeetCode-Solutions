class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict = {}
        for i, v in enumerate(nums):
            if target - v not in dict:
                dict[v] = i
            else:
                return [dict[target - v], i]
