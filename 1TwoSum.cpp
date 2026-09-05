#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; 

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            
            numMap[nums[i]] = i;
        }
        
        return {}; 
    }
};