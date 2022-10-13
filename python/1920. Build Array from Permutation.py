# first sol.
class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        # time:O(N) space:O(N)
        
         ans=[0]*len(nums)
         for i in range(len(nums)):
             ans[i] = nums[nums[i]]
         return ans

      
# simple short and one-liner

  # time:O(N) space:O(N)
  return [nums[i] for i in nums]


# second sol.

  # time:O(N) space:O(1)
  n=len(nums)
  
  #need to modify nums such that nums[i] contains 2 number(initial value & final value)
  #such that nums[i]//n will give final val & nums[i]%n will gives initial val
  #a = qb + r where  b=a//q & r = a % q
  # here lets take a = nums[i], q = len(nums), b=nums[nums[i]], r = nums[i]

  for i in range(len(nums)):
    nums[i]=n*(nums[nums[i]]%n)+nums[i]
  for i in range(len(nums)):
    nums[i]=nums[i]//n
  return nums
