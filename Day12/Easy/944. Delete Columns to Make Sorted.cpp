class Solution {
    public:
        int minDeletionSize(vector<string>& strs) {
            int count = 0;
            int cols = strs[0].size();
    
            for (int c = 0; c < cols; c++) {
                for (int r = 1; r < strs.size(); r++) {
                    if (strs[r][c] < strs[r - 1][c]) {
                        count++;
                        break;
                    }
                }
            }
    
            return count;
        }
    };
    