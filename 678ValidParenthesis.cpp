class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int size = nums.size();
        int count1 = 0, countN = 0;

        if(nums[0] == 1 && nums[size - 1] == size) {
            return 0;
        }

        for(int i : nums) {
            count1++;
            if(i == 1) {
                break;
            }
        }

        for(int i = size; i >= 0; i--) {
            countN++;
            if(nums[i] == size) {
                break;
            }
        }

        return max(count1, countN);
    }
};