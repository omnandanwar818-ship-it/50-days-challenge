class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
    //    ugly number means the given number made by 2,3,5 
        while(n%2==0) {
         n/=2;
        }
        while(n%3==0){
         n/=3;
        }
        while(n%5==0) {
         n/=5;
        }
        return n==1;//in the question gives hint if n==1 that number should be ugly number
        
    }
};