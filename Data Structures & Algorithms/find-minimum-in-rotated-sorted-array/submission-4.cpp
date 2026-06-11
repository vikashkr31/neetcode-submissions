class Solution {
public:
    int findMinimum(vector<int> &nums, int l, int r) {
        if(nums[l]<nums[r]) return nums[l];
        if(l>=r) return nums[l];
        int mid = (l+r)/2;
        if(mid!= 0 && nums[mid]<nums[mid-1]) return nums[mid];
        else if(nums[mid]>nums[mid+1]) return nums[mid+1];
        else if(nums[mid] > nums[r])
            return findMinimum(nums, mid+1, r);
        else
            return findMinimum(nums, l, mid-1);
    }
    int findMin(vector<int> &nums) {
        return findMinimum(nums, 0, nums.size()-1);
    }
};
