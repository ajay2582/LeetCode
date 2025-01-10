class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int n = words2.size();
        vector<string>ans;

        unordered_map<char , int > mp;
        for(int i = 0 ;  i < n;i++){
            unordered_map<char , int > submap;
            string temp = words2[i];
            int len = temp.length();
            for(int j = 0 ; j < len;j++){
                char ch = temp[j];
                submap[ch]++;
            }
            for(auto it : submap){
                char ch = it.first;
                if(mp.find(ch) == mp.end()) {

                    int freq = it.second;
                    mp[ch] = freq;

                }
                else {
                    int mpfreq = mp[ch];
                    int submapfreq = submap[ch];
                    int ans = max(mpfreq , submapfreq);
                    mp[ch] = ans;

                }
            }
        }

        int m = words1.size();
        for(int i = 0 ; i < m ;i++){
           unordered_map<char , int > mp1;
            string temp = words1[i];
            int len = temp.length();
            for(int j = 0 ; j < len;j++){
                char ch = temp[j];
                mp1[ch]++;
            }
                auto track = mp.begin();
            for(auto it : mp){
                track++;
                 char tst = it.first;
                 if(mp1.find(tst) != mp1.end()) {

                    int valmp = it.second;
                    int valmp1 = mp1[tst];
                    if(valmp1 < valmp) {
                        break;
                    }
                    if(track == mp.end()) {
                        ans.push_back(temp);

                    }
                    
                    

                 }
                 else {
                    break;

                 }

            }

        }

        return ans;
        
    }
};