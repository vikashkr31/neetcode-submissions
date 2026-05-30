class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s_hash;
        for(auto num : nums)
        {
            if(s_hash.find(num) != s_hash.end())
                return true;

            s_hash.insert(num);
        }
        return false;    
    }
};