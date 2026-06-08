class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int res = 0;

        for(auto num : nums)
            s.insert(num);

        for(auto num : nums) {
            if(!s.count(num-1)) {
                int count = 0;
                int curr = num;
                while(s.count(curr)) {
                    count++;
                    curr++;
                }
                res = max(res, count);
            }
        }

        return res;
    }
};
