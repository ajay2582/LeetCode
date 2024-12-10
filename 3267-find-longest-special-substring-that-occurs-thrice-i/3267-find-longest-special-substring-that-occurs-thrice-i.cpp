class Solution {
public:
    int maximumLength(string s) {

        // if( s == "cccerrrecdcdccedecdcccddeeeddcdcddedccdceeedccecde"){
        //     return 2;
        // }
        // map<string , int> mp;
        // int len = s.length();
        // for(int i = 0 ; i < len;i++){
        //     for(int j = i;j<len;j++){
                
        //         string temp = s.substr(i , j - i + 1  );
        //         mp[temp]++;
                

        //     }
        // }

        // vector<string>v;
        // for(auto it : mp){
        //     if(it.second >= 3) {
        //         v.push_back(it.first);
        //     }
        // }

        // if(v.size() == 0) {
        //     return -1;
        // }
        // int maxi = -1;

        // for(int i = 0 ; i < v.size();i++){

           
        //     int len = v[i].length();
        //     maxi = max(maxi , len);


        // }
 
         int n = s.size(), max_len = -1;

        for (int len = 1; len <= n; ++len) {
            unordered_map<string, int> freq;

            for (int i = 0; i <= n - len; ++i) {
                string sub = s.substr(i, len);

                bool is_special = true;
                for (int j = 1; j < len; ++j) {
                    if (sub[j] != sub[0]) {
                        is_special = false;
                        break;
                    }
                }

                if (is_special) {
                    freq[sub]++;
                    if (freq[sub] >= 3)
                        max_len = max(max_len, len);
                }
            }
        }

        return max_len;

        

        
        
    }
};