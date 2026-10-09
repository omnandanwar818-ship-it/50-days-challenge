class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty()) return false;
    std::sort(nums.begin(),nums.end());
    for(int i=0; i<(int)nums.size()-1; i++){//int likhnese array me negative number ka koi farak nhi padega code pr
        if(nums[i]==nums[i+1]){
            return true;
        }
    }
    return false;
    }
};