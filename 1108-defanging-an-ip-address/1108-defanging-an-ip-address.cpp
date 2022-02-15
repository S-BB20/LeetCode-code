
class Solution {
public:
    string defangIPaddr(string address) {
        string add = "[.]";
        size_t f = address.find('.');
        while(f != -1)
        {
            address.replace(f, 1, add);
            f = address.find('.',f + 2);
        }
        return address;
    }
};