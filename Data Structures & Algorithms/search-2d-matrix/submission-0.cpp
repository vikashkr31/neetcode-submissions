class Solution {
public:
    bool search(vector<vector<int>>& matrix, int totalCol, int l, int r, int target) {
        if(l>r) return false;
        int mid = (l+r)/2;
        int row = mid/totalCol;
        int col = mid%totalCol;
        if(matrix[row][col] == target) return true;
        else if(matrix[row][col] > target)
            return search(matrix, totalCol, l, mid-1, target);
        else
            return search(matrix, totalCol, mid+1, r, target);       
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return search(matrix, matrix[0].size(), 0, ((matrix.size()-1)*matrix[0].size())+matrix[0].size()-1, target);
    }
};
