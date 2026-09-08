#include <vector>

class Solution {
public:
    std::vector<int> findDegrees(std::vector<std::vector<int>>& matrix) {
        int n = matrix.size();
        std::vector<int> result(n, 0);
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                result[i] += matrix[i][j];
            }
        }
        
        return result;
    }
};