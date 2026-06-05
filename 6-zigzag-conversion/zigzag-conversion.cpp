class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1 || s.size() <= numRows)
            return s;

        int n = s.size();

        vector<vector<char>> store(
            numRows,
            vector<char>(n, ' ')
        );

        int row = 0;
        int col = 0;
        int k = 0;

        while (k < n) {

            // Vertical down
            while (row < numRows && k < n) {
                store[row][col] = s[k++];
                row++;
            }

            row -= 2;
            col++;

            // Diagonal up
            while (row > 0 && k < n) {
                store[row][col] = s[k++];
                row--;
                col++;
            }

            row = 0;   
        }

        string ans;

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < n; j++) {
                if (store[i][j] != ' ')
                    ans += store[i][j];
            }
        }

        return ans;
    }
};