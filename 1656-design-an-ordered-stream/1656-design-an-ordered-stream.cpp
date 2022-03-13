class OrderedStream {
public:
    vector<int> in;
    int index = 0;
    vector<string> temp;
    OrderedStream(int n) {
        for(int i = 0; i < n; i++)
        {
            in.push_back(0);
            temp.push_back("");
        }
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string> ans;
        in[idKey - 1] = idKey;
        temp[idKey - 1] += value;
        for(int i = 0; i< in.size(); i++)
        {
            
            if(in[i] == index + 1)
                for(int j = index; j < in.size() && temp[j] != ""; j++)
                {
                    ans.push_back(temp[j]);
                    index += 1;
                }
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */