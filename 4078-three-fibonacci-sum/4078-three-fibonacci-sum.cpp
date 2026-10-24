class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long a=0;
        long long b=1;
        long long c=1;
        while(true){
            long long curr_val=a+b+c;

            if(curr_val==n){
                return true;
            }
            if(curr_val>n){// '!=' used nhi kr sakte because isse iteration n tk hi chalega.
                return false;
            }
            long long next_val=b+c;
            a=b;
            b=c;
            c=next_val;
        }
    }
};