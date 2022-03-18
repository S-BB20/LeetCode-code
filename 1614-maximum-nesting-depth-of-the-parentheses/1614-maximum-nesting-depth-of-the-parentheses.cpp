class Solution {
public:
    int maxDepth(string s) {
        int  n = 0, max = 0;
        for(int i = 0; i < s.length(); i++)
        {
            switch(s[i])
            {
                case '(' :
                    n += 1;
                    if(max < n)
                        max = n;
                    break;
                case ')' :
                    n -= 1;
                    break;
                default :
                    break;
            }
        }
        return max;
    }
};