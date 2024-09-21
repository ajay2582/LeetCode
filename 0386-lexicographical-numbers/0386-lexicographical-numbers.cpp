class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>ans;
        for(int i = 1;i<= n;i++){
            string temp = to_string(i);
            ans.push_back(temp);

        }
        sort(ans.begin(), ans.end());
        vector<int>res;
        for(auto it : ans){
            res.push_back(stoi(it));
        }
        return res;

        
    }
};