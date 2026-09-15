class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        int str=1;
        int end=x;
        int ans=0;
        while(str<=end){
            int mid=str+(end-str)/2;
            if(mid <= x/mid){// Using division (mid <= x / mid) instead of multiplication (mid * mid <= x)
            // strictly prevents integer overflow issues.
                ans=mid;
                str=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};           