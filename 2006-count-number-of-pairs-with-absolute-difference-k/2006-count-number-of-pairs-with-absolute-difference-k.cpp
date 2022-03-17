class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0, max = 0;
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            if(max < nums[i])
                max = nums[i];
            m[nums[i]] += 1;
        }
        for(int i = 0; i < max; i++)
            if(m[i] != 0 && m[i + k] != 0)
            {
                ans =  ans + m[i + k] * m[i];
            }
        return ans;
    }
};