class Solution {
public:
    int minimumSum(int num) {
        vector<int> n(4);
        for(int i = 1000, index = 0; i > 0; i /= 10, index+=1)
        {
            n[index] = num / i;
            num %= i;
        }
        sort(n.begin(), n.end());
        return (n[0]+n[1])*10 + (n[2]+n[3]);
    }
};