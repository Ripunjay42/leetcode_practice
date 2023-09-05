class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
         int r = matrix.size();
        int c = matrix[0].size();
        
		// if matrix have 0 rows or 0 colums
        if(r == 0 || c == 0)
            return false;
        
		// treating matrix as array just taking care of endices
		// [0..n*m]
        int start = 0, end = r*c - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
			// a[x] : matrix[x / m][x % m] formulae
            int ind = matrix[mid/c][mid%c];
            if (target == ind)
                return true;
			// left half
            else if(target < ind)
                end = mid - 1;
            else
			// right half
                start = mid + 1;       
        }
        return false;
    }
};