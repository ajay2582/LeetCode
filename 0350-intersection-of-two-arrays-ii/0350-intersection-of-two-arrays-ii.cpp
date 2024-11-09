class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;
        for(int i = 0 ; i< nums1.size();i++){
            int val  = nums1[i];

            for(int j = 0 ; j < nums2.size();j++){
                  
                if(val == nums2[j]){

                    nums2[j] = -34;


                   
                    ans.push_back(val);
                    break;
                    
                }


            }
        }
       return ans;
        
    }
};