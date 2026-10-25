class Solution {
public:
    int climbStairs(int n) {
        //base case
         if(n<=2){
            return n;
         }
    //    main condition
    int current=0;
    int prev1=2;
    int prev2=1;
    for(int i=3; i<=n; i++){
        current=prev1+prev2;
        prev2=prev1;
        prev1=current;
    }
    return current;
    }
};