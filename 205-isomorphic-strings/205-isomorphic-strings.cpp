class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool b = true;
        map<char, char> m;
        char c[130] = {0, };
        for(int i = 0; i < s.size(); i++)
        {
            if(m.find(s[i]) == m.end() && c[t[i]] == 0){
                m[s[i]] = t[i];
            }
            if(m[s[i]] != t[i])
                b = false;
            c[t[i]] =  1;   
        }
        return b;
    }
};