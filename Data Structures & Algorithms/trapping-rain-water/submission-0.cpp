class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lHeight(n, 0);
        vector<int> rHeight(n, 0);

        lHeight[0] = height[0];
        for(int i = 1; i<n;i++){
            lHeight[i] = max(lHeight[i-1], height[i]);
        }

        rHeight[n-1] = height[n-1];
        for(int i = n-2; i>=0;i--){
            rHeight[i] = max(rHeight[i+1], height[i]);
        }

        int ans = 0;
        for(int i=0;i<n;i++){
            ans = ans + min(lHeight[i], rHeight[i]) - height[i];
        }

        return ans;
    }
};
