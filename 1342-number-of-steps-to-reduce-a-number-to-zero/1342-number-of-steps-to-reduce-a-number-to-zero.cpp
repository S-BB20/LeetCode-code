class Solution {
public:
    int numberOfSteps(int num) {
        int ans = -1;
        if(num == 0)
            ans = 0;
        while(num != 0)
        {
            if(num % 2 == 0)
            {
                ans += 1;
                num /= 2;
            }
            else 
            {
                ans += 2;
                num = (num - 1) /2;
            }
            
        }
        return ans;
    }
};