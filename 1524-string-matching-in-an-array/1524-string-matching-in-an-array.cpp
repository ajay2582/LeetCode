class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        vector<string>ans;
        for(int i = 0 ; i < n;i++){
            for(int j = 0 ; j < n;j++){
                if(j == i){
                    continue;
                }
                else {

                    string str = words[j];
                    if(words[i].find(str) == string::npos) {

                    }
                    else {
                        ans.push_back(words[j]);

                    }
                }

            }
        }
        set<string>st(ans.begin(), ans.end());

        vector<string>res(st.begin(), st.end());
        return res;
        

        
        

        
    }
};