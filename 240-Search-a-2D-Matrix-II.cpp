class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int i = 0, j = m-1;

        while(i<n && j>=0)
        {
            int temp = matrix[i][j];
            if(temp == target) return true;
            else if(temp > target) j--;
            else i++;
        }

        return false;
    }
};