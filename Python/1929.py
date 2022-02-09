class Solution(object):
    def getConcatenation(self, nums):

        nums.extend(nums)
        return nums

    """
    another solution
        ans = nums+nums
        return ans
    """
