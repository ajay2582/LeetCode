// class Solution {
// public:
//     vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& q) {
//         vector<int>ans;
//         int n = q.size();
//         int m = q[0].size();
//         for(int i = 0 ; i < n;i++){
//             int starting = q[i][0];
//             int ending = q[i][1];
//                 int cnt = 0;

//             for(int j =  starting ; j<= ending;j++){
                
//                 string str = w[j];
//                 int len = str.length();

//                 char chfist = str[0];
//                 char chlast = str[len-1];

//                 if(chfist == 'a'|| chfist == 'e' || chfist == 'i' || chfist == 'o'
//                 || chfist=='u' ) {

//                     if(chlast == 'a'|| chlast == 'e' || chlast == 'i'|| chlast == 'o'
//                     || chlast =='u') {
//                         cnt++;
//                     }
//                 }
//             }
//             ans.push_back(cnt);

//         }

//         return ans;



        
        
//     }
// };


class Solution {
public:
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& q) {
        int n = w.size();
        vector<int> prefix(n + 1, 0); // Prefix sum array for vowel strings
        
        // Helper lambda to check if a character is a vowel
        auto isVowel = [](char ch) {
            return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
        };

        // Precompute prefix sums
        for (int i = 0; i < n; ++i) {
            string& str = w[i];
            if (isVowel(str.front()) && isVowel(str.back())) {
                prefix[i + 1] = prefix[i] + 1;
            } else {
                prefix[i + 1] = prefix[i];
            }
        }

        // Answer each query using the prefix sum
        vector<int> ans;
        for (auto& query : q) {
            int starting = query[0];
            int ending = query[1];
            ans.push_back(prefix[ending + 1] - prefix[starting]);
        }

        return ans;
    }
};
