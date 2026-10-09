class Solution {
public:
    int minInsertions(string s) {
        int insertions = 0;
        int req = 0;
        
        for (char c : s) {
            if (c == '(') {
                if (req % 2 != 0) {
                    insertions++;
                    req--;
                }
                req += 2;
            } else {
                req--;
                if (req < 0) {
                    insertions++; 
                    req = 1;      
                }
            }
        }
        
        return insertions + req;
    }
};