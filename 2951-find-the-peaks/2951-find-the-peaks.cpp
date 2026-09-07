class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
   std:: vector<int>ans;
    int n=mountain.size();
    for(int i=1; i<n-1; i++){
        if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1]){
         ans.push_back(i);
        }
    }
    return ans;
        }
};
// #include <vector>

// class Solution {
// public:
//     std::vector<int> findPeaks(std::vector<int>& mountain) {
//         std::vector<int> peaks;
//         int n = mountain.size();
        
//         // Condition 2: The first and last elements are NOT a peak.
//         // We guarantee this by starting the loop at index 1 and stopping at n - 2.
//         for (int i = 1; i < n - 1; ++i) {
            
//             // Condition 1: An element must be STRICTLY GREATER than its neighboring elements.
//             if (mountain[i] > mountain[i - 1] && mountain[i] > mountain[i + 1]) {
//                 peaks.push_back(i); // Store the index of the peak
//             }
//         }
        
//         return peaks;
//     }
// };
