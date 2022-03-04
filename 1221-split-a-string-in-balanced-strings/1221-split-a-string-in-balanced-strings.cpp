class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int c1 = 0, c2 = 0;
        for(int i = 0, c; i < s.size();i++)
        {
            if(s[i] == 'L')
                c1 += 1;
            else
                c2 += 1;
            if(c1 == c2)
            {
                ans += 1;
                c1 = 0;
                c2 = 0;
            }
            
        }
        return ans;
    }
};