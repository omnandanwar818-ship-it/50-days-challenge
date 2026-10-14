class Solution {
public:
    int maximumProduct(vector<int>& nums) {
    int n=nums.size();
    std::sort(nums.begin(),nums.end());
 
        int cases1=nums[n-1]*nums[n-2]*nums[n-3];
        int cases2=nums[0]*nums[1]*nums[n-1];

            return std::max(cases1,cases2);
    
    }
};