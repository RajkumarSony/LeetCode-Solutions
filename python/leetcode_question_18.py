class Solution:
	def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
		out = []
		n = len(nums)
		nums.sort()

		for i in range(n-3):
			if (i > 0 and nums[i-1]==nums[i]):
				continue
			for j in range(i+1,n-2):
				if (nums[i]+nums[j]+nums[n-1]+nums[n-2] < target):
					continue
				elif (nums[i]+nums[j]+nums[j+1]+nums[j+2]>target):
					break
				if (j > i+1 and nums[j-1] == nums[j]):
					continue

				l = j + 1
				r = n -1
				while (l < r):
					tmp = nums[i]+nums[j]+nums[l]+nums[r]
					if (tmp < target):
						l += 1
					elif (tmp > target):
						r -= 1
					else:
						out.append([nums[i],nums[j],nums[l],nums[r]])
						while(l+1 < r and nums[l+1] == nums[l]):
							l += 1
						l += 1
						while (r-1>l and nums[r-1] == nums[r]):
							r -= 1
						r -= 1
		return out
