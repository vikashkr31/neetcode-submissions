class Solution {
public:
    void allPermutation(vector<int>& nums, int idx, int n, vector<int>& ds, vector<bool>& visited, vector<vector<int>>& res)
    {
        if(idx == n) {
            res.push_back(ds);
            return;
        }

        for(int i = 0; i<n; i++)
        {
            if(!visited[i]) {
                visited[i] = true;
                ds.push_back(nums[i]);
                allPermutation(nums, idx+1, n, ds, visited, res);
                visited[i] = false;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> res;
        vector<int> ds;
        vector<bool> visited(n,0);

        allPermutation(nums, 0, n, ds, visited, res);

        return res;
    }
};
