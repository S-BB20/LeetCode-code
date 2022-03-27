class Solution {
public:
    int countPoints(string rings) {
        int r = 100, g = 10, b =1;
        int l = 0;
        vector<int> v(1,0);
        for(int i = 0; i < rings.size() - 1; i+=2)
        {
            int in = rings[i + 1] - '0';
            while(l < in)
            {
                v.push_back(0);
                l += 1;
            }
            if(rings[i] == 'R' && v[in] / 100 == 0) 
                v[in] += r;
            else if(rings[i] == 'G' && (v[in]/10)%10 == 0)
                v[in] += g; 
            else if(rings[i] == 'B' &&  v[in]%10 == 0) 
                v[in] += b;
            
        }
        return count(v.begin(), v.end(), 111);
    }
};