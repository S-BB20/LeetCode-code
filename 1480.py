class Solution(object):
    def runningSum(self, nums):
        for i in range(len(nums) - 1, 0, -1) : #len(nums)-1 부터 1까지
            nums[i] = sum(nums[:i + 1])
        return nums