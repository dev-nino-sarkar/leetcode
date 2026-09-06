#include <vector>

using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> last_lower(26, -1);
        vector<int> first_upper(26, -1);
        
        for (int i = 0; i < word.length(); i++) {
            char c = word[i];

            if (c >= 'a' && c <= 'z') {
                last_lower[c - 'a'] = i;
            } 
            else if (c >= 'A' && c <= 'Z') {
                if (first_upper[c - 'A'] == -1) {
                    first_upper[c - 'A'] = i;
                }
            }
        }
        
        int count = 0;
        
        for (int i = 0; i < 26; i++) {
            if (last_lower[i] != -1 && first_upper[i] != -1 && last_lower[i] < first_upper[i]) {
                count++;
            }
        }
        
        return count;
    }
};