class Solution {
public:
    int countDigits(int num) {
   int count=0;
   int origionalnum=num;
   while(origionalnum>0){
    int digit=origionalnum%10;//last digit
    if(num!=0 && num%digit==0){
        count++;
    }
    origionalnum/=10;
   }
   return count;
    }
};