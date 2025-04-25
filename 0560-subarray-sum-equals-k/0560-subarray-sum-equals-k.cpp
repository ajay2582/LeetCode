#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        unordered_map<int, int> prefixSumCount;
        
        // Initialize with sum 0 having count 1
        prefixSumCount[0] = 1;
        
        for (int num : nums) {
            // Add current element to running sum
            sum += num;
            
            // If (sum - k) exists in map, it means there's a subarray with sum k
            if (prefixSumCount.find(sum - k) != prefixSumCount.end()) {
                count += prefixSumCount[sum - k];
            }
            
            // Increment count of current prefix sum
            prefixSumCount[sum]++;
        }
        
        return count;
    }
};