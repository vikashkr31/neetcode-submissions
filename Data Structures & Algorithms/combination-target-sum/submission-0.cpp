class Solution {
public:
    void combSum(vector<int>& arr, vector<int>& ds, int idx, int n, vector<vector<int>>& res, int target)
    {
        if(target<0)
            return;
            
    	if(idx==n){
            if(target==0)
    		    res.push_back(ds);
    		return;
        }
        //pick the element
        ds.push_back(arr[idx]);
        combSum(arr, ds, idx, n, res, target-arr[idx]);
        ds.pop_back();

        //Don't pick the element
        combSum(arr, ds, idx+1, n, res, target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> ds;

        combSum(nums, ds, 0, nums.size(), res, target);
        return res;
    }
};
