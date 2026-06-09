class Solution {
public:
    void checkTripletSum(vector<int>& nums, vector<int>& ds, int idx, set<vector<int>>& s, int sum)
    {
        if(ds.size()==3) {
            if(sum == 0)
                s.insert(ds);
            return;
        }

        if(idx == nums.size()) return;

        //pick element
        ds.push_back(nums[idx]);
        checkTripletSum(nums, ds, idx+1, s, sum+nums[idx]);
        ds.pop_back();

        //skip
        checkTripletSum(nums, ds, idx+1, s, sum);

    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        set<vector<int>> s;
        
        sort(nums.begin(), nums.end());
        checkTripletSum(nums, ds, 0, s, 0);

        for(auto vec : s)
            ans.push_back(vec);

        return ans;
    }
};
