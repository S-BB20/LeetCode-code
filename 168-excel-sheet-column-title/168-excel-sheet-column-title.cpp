class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "";
        for(int i = 26; 1 <= columnNumber;)
        {    
            char c = (columnNumber - 1) % 26;
            s += (c + 'A');
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};