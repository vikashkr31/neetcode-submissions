class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(auto str : strs){
            if(str.length()>=100)
                encoded+=to_string(str.length()) + str;
            else if (str.length()>=10)
                encoded+= "0" + to_string(str.length()) + str;
            else
                encoded+= "00" + to_string(str.length()) + str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i=0;
        while(i<s.length())
        {
            int len = stoi(s.substr(i, 3));
            decoded.push_back(s.substr(i+3,len));
            i = i+len+3;
        }
        return decoded;
    }
};
