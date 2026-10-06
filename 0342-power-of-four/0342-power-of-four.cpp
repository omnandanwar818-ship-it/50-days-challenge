// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         return n>0 && (n & (n-1))==0 && ((n-1)%3==0);//optimal approach 


//     }
 
// };
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        
        while (n > 1) {
            // If it's not perfectly divisible by 4, it's not a power of 4
            if (n % 4 != 0) return false;
            n /= 4;
        }
        
        return n == 1;
    }
};
