class Solution {
public:
    string sortSentence(string s) {
        map<int, string> m;
        string temp = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
                continue;
            if('0' < s[i] && s[i] <='9')
            {
                m[s[i] - '0'] = temp;
                temp = "";
                continue;
            }
            temp.push_back(s[i]);
        }
        for(int i = 0; i < m.size(); i++)
        {
            if(i > 1)
                temp += " ";
            temp += m[i]; 
            
        }
        return temp;
    }
};