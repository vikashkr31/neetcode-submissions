class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> result;

        for(auto str : strs) {
            string s = str;
            sort(s.begin(), s.end());
            m[s].push_back(str);
        }

        for(auto vec : m)
            result.push_back(vec.second);

        return result;
    }
};
