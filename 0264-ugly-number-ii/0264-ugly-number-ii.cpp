class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> arr(n + 1);
        
        // Pointers for 2, 3, and 5 factors respectively
        int i2 = 1;
        int i3 = 1;
        int i5 = 1;
      
        // The first ugly number is always 1
        arr[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            int i2uglyNum = arr[i2] * 2;
            int i3uglyNum = arr[i3] * 3;
            int i5uglyNum = arr[i5] * 5;

            // Find the next smallest ugly number
            int miniMum = min({i2uglyNum, i3uglyNum, i5uglyNum});

            arr[i] = miniMum;

            // Advance the pointers. 
            // Separate 'if' statements perfectly handle and skip duplicate values.
            if (miniMum == i2uglyNum) {
                i2++;
            }
            if (miniMum == i3uglyNum) {
                i3++;
            }
            if (miniMum == i5uglyNum) {
                i5++;
            }
        }
        return arr[n]; // Returns the nth ugly number
    }
};
