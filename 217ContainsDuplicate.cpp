#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> isUnique;

        for(int num : nums) {
            if(!isUnique.insert(num).second) {
                return true;
            }
        }

        return false;
    }
};