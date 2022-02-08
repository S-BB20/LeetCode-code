class Solution(object):
    def buildArray(self, nums):
        ans = [0 for i in range(len(nums))]
        for i in range(len(nums)) :
          ans[i]=nums[nums[i]]
        return list(ans)