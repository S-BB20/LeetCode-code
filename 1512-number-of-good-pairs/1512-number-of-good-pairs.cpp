#include <algorithm>
#include<vector>
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> m;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(m.count(nums[i]) > 0)
            {
                m[nums[i]] += 1;
                ans += (m[nums[i]] - 1);
            }
            else
                m[nums[i]] = 1;
        }
        return ans;
    }
    
};