class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> product(n,0);

        for(int i = n-1; i>=0; i--) {
            if(i==n-1)
                product[i] = nums[i];
            else
                product[i] = nums[i] * product[i+1];
        }

        vector<int> res;
        int leftProduct = 1;
        for(int i=0;i<n;i++){
            if(i==n-1)
                res.push_back(leftProduct);
            else {
                res.push_back(leftProduct*product[i+1]);
                leftProduct = leftProduct*nums[i];
            }
            
        }

        return res;
    }
};
