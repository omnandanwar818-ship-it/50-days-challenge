class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end()); //0(nlogn)
    //    only solve by one-pass algorithm
      int low=0,mid=0,high=nums.size()-1;
      while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }else if(nums[mid]==1){
             mid++;
        }else{//mid==2
           swap(nums[high],nums[mid]);
           high--;
        }
      }
    }
};