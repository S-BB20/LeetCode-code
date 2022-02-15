class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for(int i = n; i > 0; i--)
        {
            nums.insert(nums.begin() + i , nums[2 * n - 1]);
            nums.erase(nums.begin() + 2 * n);
        }
        return nums;
    }
};