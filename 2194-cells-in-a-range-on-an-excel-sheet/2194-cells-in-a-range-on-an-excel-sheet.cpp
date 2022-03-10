class Solution {
public:
    vector<string> cellsInRange(string s) {
        int se[2] = {s[3] - s[0], s[4] - s[1]};
        vector<string> ans((se[0] + 1) * (se[1] + 1));
        
        for(int i = 0, in = 0; i <= se[0]; i++)
            for(int j = 0; j <= se[1];j++, in++)
            {
                ans[in].push_back(s[0] + i);
                ans[in].push_back(s[1] + j);
            }
        return ans;
    }
};