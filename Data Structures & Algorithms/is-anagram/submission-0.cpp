class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash(26, 0);

        for(auto c : s)
            hash[c-97]++;

        for(auto c : t)
            hash[c-97]--;

        for(auto num : hash)
            if(num) return false;
            
        return true;
    }
};
