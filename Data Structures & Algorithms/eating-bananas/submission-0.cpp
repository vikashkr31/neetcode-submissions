class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r = piles[0];
        for(int i=1;i<piles.size();i++)
            r = max(r, piles[i]);

        int l = 1;
        int res = INT_MAX;
        while(l<=r){
            int mid = (l+r)/2;
            int sum = 0;
            for(int i =0;i<piles.size();i++)
            {
                sum = sum + piles[i]/mid;
                if(piles[i]%mid)
                    sum++;
            }
            if(sum<=h){
                r = mid-1;
                res = min(res, mid);
            }
            else
                l = mid+1;
        }

        return res;
    }
};
