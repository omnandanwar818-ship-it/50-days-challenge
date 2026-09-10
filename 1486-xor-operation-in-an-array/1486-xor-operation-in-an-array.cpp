class Solution {
public:
    int xorOperation(int n, int start) {
  int ans=0;
   for(int i=0; i<n; i++){
  int cursum=start+2*i;
  ans=ans^cursum;
  }
  return ans;
  }
    
};