class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single=0;
        int doubled=0;
      for(int val:nums){
             if(val>=0 && val<=9){
              single+=val;
             }else{
                doubled+=val;
             }
      }
  if(single!=doubled){
    return true;
  }else{
    return false;
  }
    }
};