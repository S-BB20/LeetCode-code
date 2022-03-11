class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = start;
        start += 2;
        for(int i = 1; i < n; i++, start += 2)
            ans = ans ^ start;
        return ans;
    }
};