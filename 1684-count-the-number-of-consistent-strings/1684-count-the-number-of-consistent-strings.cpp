class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int l = allowed.length();
        int ans = 0;
        for(int i = 0; i < words.size();i++)
        {
            int n = 1;
            for(int j = 0; j < words[i].size(); j++)
            {
                int t = 0;
                for(int a = 0; a < l; a++)
                    if(words[i][j] == allowed[a])
                        t = 1;
                if(t != 1)
                    n = 0;
            }
            if(n == 1)
                ans += 1;
        }
        return ans;
    }
};