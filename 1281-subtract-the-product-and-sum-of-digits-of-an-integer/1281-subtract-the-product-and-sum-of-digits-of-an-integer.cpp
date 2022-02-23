class Solution {
public:
    int subtractProductAndSum(int n) {
        int add = 0, mul = 1;
        for(int i = 10; n >= 1; n /= i)
        {
            add += (n % i);
            mul *= (n % i);
        }
        
        return mul - add;
        
    }
};