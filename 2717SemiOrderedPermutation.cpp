class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx1 = -1, idxN = -1;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                idx1 = i;
            }
            if (nums[i] == n) {
                idxN = i;
            }
        }
        
        int swaps = idx1 + (n - 1 - idxN);
        
        if (idx1 > idxN) {
            swaps--;
        }
        
        return swaps;
    }
};