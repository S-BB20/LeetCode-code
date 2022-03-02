class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int, char> m;
        for(int i = 0; i < indices.size(); i++)
        {
            m[indices[i]] = s[i];
        }
        for(int i = 0; i<indices.size();i++)
        {
            s[i] = m[i];
        }
        return s;
    }
};