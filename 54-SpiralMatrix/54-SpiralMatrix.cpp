class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int r = matrix.size(); // rows is the lenth of the matrix
        int c = matrix[0].size(); // columns is the lenth of the matrix element (array)
        int dir = 1; // this is the direction in which the spiral moves, -1 when it flips after 
        // going through a row or column
        int i = 0; //row index
        int j = -1; // column index
        vector<int> output;

        //traverse through the whole matrix 
        while(r*c > 0)
        /* when transversing while moving horizontally, the column index keeps increasing and 
        while moving vertically, the row index keeps increasing. direction flips when we chnage 
        from right+down to left+up
        */
        {
            for ( int s = 0; s < c; s++) //moving horizontally
            {
                j += dir;
                output.push_back(matrix[i][j]);
            }
            r--;
            for ( int s = 0; s < r; s++) //moving vertically
            {
                i += dir;
                output.push_back(matrix[i][j]);
            }
            c--;
            dir *= -1;

        }
    return output;   
    }
};