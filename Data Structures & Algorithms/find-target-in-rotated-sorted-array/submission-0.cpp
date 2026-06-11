class Solution {
public:
    int searchNum(vector<int>& nums, int target, int l, int r) {
        if(l>r) return -1;
        int mid = l + (r-l)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target)
            return searchNum(nums, target, l, mid-1);
        else
            return searchNum(nums, target, mid+1, r);
    }
    int getMinElementIndex(vector<int>& nums, int l, int r) {
        if(l>=r) return l;
        int mid = l + (r-l)/2;
        if(nums[mid]>nums[r])
            return getMinElementIndex(nums, mid+1, r);
        else
            return getMinElementIndex(nums, l, mid);
    }
    
    int search(vector<int>& nums, int target) {
        int rotIdx = getMinElementIndex(nums, 0, nums.size()-1);
        if(target == nums[rotIdx]) return rotIdx;
        else if(target > nums[rotIdx] && target <= nums[nums.size()-1])
            return searchNum(nums, target, rotIdx, nums.size()-1);
        else 
            return searchNum(nums, target, 0, rotIdx);
    }
};
