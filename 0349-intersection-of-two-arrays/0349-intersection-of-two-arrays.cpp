class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0 ; i< nums1.size();i++){
            int val  = nums1[i];

            for(int j = 0 ; j < nums2.size();j++){

                if(val == nums2[j]){
                    ans.push_back(val);
                }


            }
        }
        set<int> st( ans.begin() , ans.end()) ;
      
        vector<int> fin(st.begin() , st.end());
      
        return fin ;
        
    }
};