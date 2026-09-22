class Solution {
public:
    // Helper function to check if we can split the array into at most k 
    // subarrays such that no subarray sum exceeds `maxSum`.
    bool canSplit(vector<int>& nums, int k, int maxSum) {
        int currentSum = 0;
        int subarrays = 1;
        
        for (int num : nums) {
            if (currentSum + num <= maxSum) {
                currentSum += num;
            } else {
                subarrays++;
                currentSum = num;
            }
        }
        
        return subarrays <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        
        // Find the bounds for binary search
        for (int num : nums) {
            low = max(low, num); // Minimum possible max sum is the largest single element
            high += num;         // Maximum possible max sum is the sum of all elements
        }
        
        int ans = high;
        
        // Binary search between low and high
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (canSplit(nums, k, mid)) {
                ans = mid;         // Try a smaller maximum sum
                high = mid - 1;
            } else {
                low = mid + 1;     // Increase the allowed maximum sum
            }
        }
        
        return ans;
    }
};
