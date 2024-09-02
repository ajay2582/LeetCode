class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        // Calculate the total sum of chalk usage
        long long totalChalk = accumulate(chalk.begin(), chalk.end(), 0LL);
        
        // Reduce k by modulo with totalChalk
        k %= totalChalk;
        
        // Find the student who will replace the chalk
        for (int i = 0; i < chalk.size(); ++i) {
            if (k < chalk[i]) {
                return i;
            }
            k -= chalk[i];
        }
        
        // In case no student is found, which theoretically should never happen
        return 0;
    }
};
