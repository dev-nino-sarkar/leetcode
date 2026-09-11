#include <string>

using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        int mid = n / 2;
        int balance = 0;

        auto isVowel = [](char c) {
            c = tolower(c);
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        
        for (int i = 0; i < mid; ++i) {
            if (isVowel(s[i])) {
                balance++;
            }
            if (isVowel(s[i + mid])) {
                balance--;
            }
        }
        
        return balance == 0;
    }
};