class Solution {
public:
    void printSub(vector<int>& arr, vector<int> ds, int idx, int n, set<vector<int>>& s)
    {
    	if(idx==n){
    		sort(ds.begin(), ds.end());
            s.insert(ds);
    		return;
        }
        //pick the element
        ds.push_back(arr[idx]);
        printSub(arr, ds, idx+1, n, s);
        ds.pop_back();

        //Don't pick the element
        printSub(arr, ds, idx+1, n, s);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> s;
        vector<int> ds;

        printSub(nums, ds, 0, nums.size(), s);
        for(auto vec : s)
            res.push_back(vec);

        return res;
    }
};
