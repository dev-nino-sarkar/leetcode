#include <string>

using namespace std;

class Solution {
public:
    int reverseDegree(string s) {
        int degree = 0;

        for(int i = 0; i < s.size(); i++) {
            degree += ((int) ('z' - s[i] + 1) * (i + 1));
        }

        return degree;
    }
};