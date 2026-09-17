class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int str=0;
        int end=n-1;
        if(n==1) return nums[0];
        while(str<=end){
            int mid=str+(end-str)/2;
          if(mid==0 && nums[0]!=nums[1]) return nums[mid];;
          if(mid==n-1 && nums[n-1]!=nums[n-2]) return nums[mid];
         if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];//mid condtion
          if(mid%2==0){//even
             if(nums[mid-1]==nums[mid]){
                end=mid-1;//for left search
             }else{
                str=mid+1;//for right search
             }
          }else{//odd
          if(nums[mid-1]==nums[mid]){
            str=mid+1;//for right search
          }else{
            end=mid-1;//for left search
          }
          }
        }
        return -1;
    }
};