class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

          int mod = 1e9 + 7;
        int oddCount = 0, evenCount = 1;  // evenCount starts as 1
        int prefixSum = 0, result = 0;

        for (int num : arr) {
            prefixSum += num;
            if (prefixSum % 2 == 0) {
                result = (result + oddCount) % mod;
                evenCount++;
            } else {
                result = (result + evenCount) % mod;
                oddCount++;
            }
        }

        return result;
        
    }
};