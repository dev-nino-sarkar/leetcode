class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long count = 0;

        for(int i = shifts.size() - 1; i >= 0; i--) {
            count = (count + shifts[i]) % 26;

            s[i] = ((s[i] - 'a' + count) % 26) + 'a';
        }

        return s;
    }
};
