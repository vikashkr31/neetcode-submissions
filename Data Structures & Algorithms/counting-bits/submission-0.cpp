class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1, 0);

        for(int i=1;i<=n;i++){
            int num = i;
            while(num){
                res[i]++;
                num = num&(num-1);
            }
        }
        return res;
    }
};
