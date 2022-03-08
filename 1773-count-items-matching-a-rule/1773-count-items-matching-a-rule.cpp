class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int key, ans = 0;
        if(ruleKey[0] == 't')
            key = 0;
        else if(ruleKey[0] == 'c')
            key = 1;
        else if(ruleKey[0] == 'n')
            key = 2;
        for(int i = items.size() - 1; i >= 0; i--)
        {
            if(items[i][key] == ruleValue)
            {
                ans+= 1;
            }
        }
        return ans;
        
    }
};