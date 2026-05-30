class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash(26, 0);

        if(s.length() != t.length()) return false;

        for(int i=0; i<s.length(); i++){
            hash[s[i]-97]++;
            hash[t[i]-97]--;
        }
      
        for(auto num : hash)
            if(num) return false;

        return true;
    }
};
