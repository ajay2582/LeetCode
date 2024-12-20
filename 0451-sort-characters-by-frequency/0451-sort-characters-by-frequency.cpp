class Solution {
public:
      static bool cmp(pair<int, char> a, pair<int, char> b) {
        return a.first > b.first; // Sort in descending order of frequency
    }
    string frequencySort(string s) {

        int len = s.length();
        map<char , int > mp;
        for(int i = 0; i < len;i++){
            mp[s[i]]++;
        }

       vector<pair<int , char>>ans;
       for(auto it : mp){
        ans.push_back({it.second ,  it.first});

       }

         sort(ans.begin(), ans.end(), cmp);


        string temp = "";
        for(auto it: ans){
            auto inte = it.first;
            for(int i = 0 ; i < inte; i++){
                auto ch = it.second;
                temp += ch;

            }
        }

        return temp;
        
    }
};