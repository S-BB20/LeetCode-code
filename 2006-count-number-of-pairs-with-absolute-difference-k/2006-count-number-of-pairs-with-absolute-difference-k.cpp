class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
            for(int j = i; j < nums.size(); j++)
                if(nums[i] - nums[j] == k || nums[j] - nums[i] == k)
                    ans += 1;
        return ans;
    }
};