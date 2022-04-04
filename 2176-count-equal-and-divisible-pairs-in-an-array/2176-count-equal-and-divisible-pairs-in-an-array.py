class Solution:
    def countPairs(self, nums: List[int], k: int) -> int:
        l = len(nums)
        ans = 0
        for i in range(l):
            for j in range(i + 1, l):
                if nums[i] == nums[j] and i * j % k == 0:
                    ans += 1
        return ans