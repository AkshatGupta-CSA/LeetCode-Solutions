class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_number = -1;
        int column = 0;
        int i = 0;

        for (auto mat : matrix) {
            column = mat.size();
            if (target >= mat[0] && target <= mat[column - 1]) {
                row_number = i;
                break;
            }
            i++;
        }

        if (row_number == -1) return false;

        int low = 0;
        int high = column - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (matrix[row_number][mid] == target) return true;
            else if (matrix[row_number][mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return false;
    }
};
