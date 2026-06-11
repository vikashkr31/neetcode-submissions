class Solution {
public:
    int findMinimum(vector<int> &nums, int l, int r) {
        if(l>=r) return nums[l];
        int mid = (l+r)/2;
        if(nums[mid]<nums[r])
            return findMinimum(nums, l, mid);
        else
            return findMinimum(nums, mid+1, r);
    }
    int findMin(vector<int> &nums) {
        return findMinimum(nums, 0, nums.size()-1);
    }
};
