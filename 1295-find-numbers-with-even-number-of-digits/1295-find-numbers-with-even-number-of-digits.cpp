class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;

        for(int i=0; i<nums.size(); i++){
            int temp=nums[i];
                    int digit=0;
            while(temp>0){
                temp/=10;
                digit++;
            }
            if(digit%2==0){
                count++;
            }
        }
        return count;
    }
};