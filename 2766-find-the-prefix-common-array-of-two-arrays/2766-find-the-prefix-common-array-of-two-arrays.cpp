class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>ans;
        vector<int>qa;
        vector<int>qb;
        for(int i = 0 ; i < n ;i++){
            int a = A[i];
            int b = B[i];
            qa.push_back(a);
            qb.push_back(b);
            int len =  qa.size();
            set<int>st;
            for(int j = 0; j < len;j++){
                st.insert(qa[j]);
                st.insert(qb[j]);
            }

            int res =( (2*len) - st.size());

            ans.push_back(res);



        }

        return ans;


        
    }
};