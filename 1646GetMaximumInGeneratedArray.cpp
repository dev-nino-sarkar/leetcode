class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 0) {
            return 0;
        }
        if(n == 1 || n == 2) {
            return 1;
        }

        int array[n + 1];
        array[0] = 0;
        array[1] = 1;
        array[2] = 1;

        int max = 1;

        for(int i = 3; i <= n; i++) {
            if(i % 2 == 0) {
                array[i] = array[i / 2];
                
            }
            else {
                array[i] = array[i / 2] + array[(i / 2) + 1];
            }

            if(array[i] > max) {
                max = array[i];
            }
        }

        return max;
    }
};