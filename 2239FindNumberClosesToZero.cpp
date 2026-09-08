#include <cmath>
#include <vector>

class Solution {
public:
    int findClosestNumber(std::vector<int>& nums) {
        int closest = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            if(std::abs(nums[i]) < std::abs(closest)) {
                closest = nums[i];
            } 
            else if (std::abs(nums[i]) == std::abs(closest) && nums[i] > closest) {
                closest = nums[i];
            }
        }

        return closest;
    }
};