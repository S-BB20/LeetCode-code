class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int ans = 0;
        int len = arr.size();
        //int n = (int)(len + 1) / 2; //중간
        int x = 0; //최대 빈도
        for (int i = 1; i <= len; i += 2)
        {
            x += (len - i + 1 > i) ? i : len - i + 1;
        }
        //std::cout << x << " : " << ans << " : " << len % 4 << "\n";
        if (len % 2 == 1)
        {
            if (len % 4 == 3)
            {
                ans = ans + x * arr[(len + 1) / 2 - 1];
                for (int i = (len + 1) / 2 - 2, j = (len + 1) / 2, d = 0; j < len; i--, j++)
                {
                   if ((j - (len + 1) / 2) % 2 == 0)
                       d += 2;
                    //std::cout << x << " : " << ans << " : " << i << " : " << j << "\n";
                    ans = ans + arr[i] * x;
                    ans = ans + arr[j] * x;
                    x -= d;
                }
            }
            else if (len % 4 == 1)
            {
                ans = ans + x * arr[(len + 1) / 2 - 1];
                x -= 1;
                for (int i = (len + 1) / 2 - 2, j = (len + 1) / 2, d = 1; j < len; i--, j++)
                {
                    //std::cout << x << " : " << ans << " : " << i << " : " << j << "\n";
                    ans = ans + arr[i] * x;
                    ans = ans + arr[j] * x;
                    x -= d;
                    if ((j - (len + 1) / 2) % 2 == 0)
                        d += 2;

                }
    
            }
        }
        else if (len % 2 == 0)
        {
            for (int i = len / 2 - 1, j = len / 2; j < len && i >= 0; i--, j++) //짝수
            {
                ans = ans + arr[i] * x;
                ans = ans + arr[j] * x;
                x -= (len / 2 - i);
            }
        }

        return ans;

    }
};