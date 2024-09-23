class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.length();
        vector<int> dp(n + 1, n); // dp[i] will store the minimum extra characters for s[0:i]
        dp[0] = 0;  // No extra characters when there's no substring
        
        unordered_set<string> dict(dictionary.begin(), dictionary.end());

        for (int i = 1; i <= n; ++i) {
            dp[i] = dp[i - 1] + 1; // Assume s[i-1] is an extra character by default
            
            // Check all possible substrings ending at i
            for (int j = i; j >= 1; --j) {
                string sub = s.substr(j - 1, i - j + 1);
                if (dict.find(sub) != dict.end()) {
                    dp[i] = min(dp[i], dp[j - 1]);  // No extra chars if substring is found in the dictionary
                }
            }
        }

        return dp[n]; // The result is the minimum extra characters for the whole string s
    }
};
