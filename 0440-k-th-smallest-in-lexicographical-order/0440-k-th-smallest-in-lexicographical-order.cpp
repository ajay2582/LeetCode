class Solution {
public:
    int findKthNumber(int n, int k) {
        auto countSteps = [&](long prefix, long n) {
            long curr = prefix;
            long next = prefix + 1;
            long steps = 0;
            
            while (curr <= n) {
                steps += min(n + 1, next) - curr;
                curr *= 10;
                next *= 10;
            }
            return steps;
        };
        
        int curr = 1;
        k--; // because we are starting from 1 (first number)
        
        while (k > 0) {
            int steps = countSteps(curr, n);
            if (steps <= k) {
                // Move to the next sibling
                curr++;
                k -= steps;
            } else {
                // Move to the first child
                curr *= 10;
                k--;
            }
        }
        
        return curr;
    }
};
