class Solution {
public:
    void combSum(vector<int>& arr, vector<int>& ds, int idx, int n, vector<vector<int>>& res, int target)
    {
        if(target==0) {
    		res.push_back(ds);
            return;
        }
            
    	for(int i = idx; i<n;i++)
        {
            if(i!=idx && arr[i] == arr[i-1])
                continue;

            if(arr[i]>target)
                break;
            
            ds.push_back(arr[i]);
            combSum(arr, ds, i+1, n, res, target-arr[i]);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;

        sort(candidates.begin(), candidates.end());
        combSum(candidates, ds, 0, candidates.size(), res, target);

        return res;
    }
};
