#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
private:
    // Helper function made into a private class method
    bool isPossible(std::vector<int>& weights, int days, int maxCapacity) {
        int daysRequired = 1;
        int currentWeight = 0;

        for (int i = 0; i < weights.size(); i++) {
            if (weights[i] > maxCapacity) {
                return false;
            }

            if (currentWeight + weights[i] <= maxCapacity) {
                currentWeight += weights[i];
            } else {
                daysRequired++;
                currentWeight = weights[i];
            }
        }

        return daysRequired <= days;
    }

public:
    // This is the primary function LeetCode expects you to implement
    int shipWithinDays(std::vector<int>& weights, int days) {
        int sum = 0;
        int maxWeight = 0;
        
        for (int i = 0; i < weights.size(); i++) {
            sum += weights[i];
            if (weights[i]>maxWeight) {
                maxWeight = weights[i];
            }
        }

        int str = maxWeight, end = sum, ans = -1;
        
        while (str <= end) {
            int mid = str + (end - str) / 2;
            
            // Pass 'days' and 'mid' into our helper function
            if (isPossible(weights, days, mid)) {
                ans = mid;     
                end = mid - 1; 
            } else {
                str = mid + 1; 
            }
        }
        return ans;
    }
};


// #include<vector>
// #include<algorithm>
// #include<numeric>
// class Solution{
//     private:
// bool isPossible(std::vector<int>&weights,int days,int maxcapacity){
//     int daysrequired=1;
//     int currentweight=0;
//     for(int i=0; i<weights.size(); i++){   
//         if(weights[i]>maxcapacity){
//             return false;
//         }
//      if(currentweight+weights[i]<=maxcapacity){
//         currentweight+=weights[i];
//      }else{
//       daysrequired++;
//       currentweight=weights[i];
//     }
//  }
//     return daysrequired<=days;
// }
// public:
// int shipWithinDays(std::vector<int>&weights,int days){
//     int sum=0;
//     int maxweights=0;
//     for(int i=0; i<weights.size(); i++){
//         sum+=weights[i];
//         if(weights[i]>maxweights){
//             maxweights=weights[i];
//         }
//     }
//         int str=maxweights,end=sum,ans=-1;
//         while(str<=end){
//             int mid=str+(end-str)/2;
//             if(isPossible(weights,days,mid)){
//                 ans=mid;
//                 end=mid-1;
//             }else{
//                 str=mid+1;
//             }
//         }
//         return ans;
//     }
// };
