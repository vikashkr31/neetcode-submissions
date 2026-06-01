class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> result;

        for(auto str : strs) {
            vector<int> hash(26,0);
            for(auto c : str)
                hash[c-97]++;

            string key = to_string(hash[0]);
            for(int i=1;i<26;i++)
                key += ',' + to_string(hash[i]);

            m[key].push_back(str);
        }

        for(auto vec : m)
            result.push_back(vec.second);

        return result;
    }
};
