#include <vector>

using namespace std;

class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int count = 0;
        int size = nums.size();

        for(int i = 0; i < size; i++) {
            bool left_good = ((i - k) < 0) || (nums[i] > nums[i - k]);
            
            bool right_good = ((i + k) >= size) || (nums[i] > nums[i + k]);
            
            if (left_good && right_good) {
                count += nums[i];
            }
        }

        return count;
    }
};
