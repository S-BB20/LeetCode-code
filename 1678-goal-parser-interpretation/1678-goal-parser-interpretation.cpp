class Solution {
public:
    string interpret(string command) {
        string s = "";
        for(int i = 0; i < command.size(); i++)
        {
            if(command[i] == 'G')
                s.append("G");
            else if(command[i] == '(' && command[i + 1] == ')')
                s.append("o");
            else if(command[i] == 'a')
                s.append("al");
        }
        return s;
    }
};