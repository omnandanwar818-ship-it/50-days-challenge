class Solution {
public:
    int countEven(int num) {
    int temp=num;
    int digitsum=0;
    while(temp>0){
        digitsum+=temp%10;
        temp/=10;
    }
    if(digitsum%2==0){//if the digit is even number should be exactly half of given number
        return num/2;
    }else{//number should be odd-->half of number-1
        return (num-1)/2;
    }
    }
};