class Solution {
public:

    void printSub(vector<int>& arr, vector<int>& ds, int idx, int n, vector<vector<int>>& res)
    {
    	if(idx==n){
    		res.push_back(ds);
    		return;
        }
        //pick the element
        ds.push_back(arr[idx]);
        printSub(arr, ds, idx+1, n, res);
        ds.pop_back();

        //Don't pick the element
        printSub(arr, ds, idx+1, n, res);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ds;

        printSub(nums, ds, 0, nums.size(), res);
        return res;
    }
};
