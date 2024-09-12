class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        for(int i = 0 ; i< nums.size();i++){
            int val = nums[i];
            if(mp.find(val) == mp.end()){
                mp.insert({ val , i } );


            }
            else {
                auto it = mp.find(val);

                if( abs( i - it->second) <= k){
                    return true;
                }
                else {
                    mp.erase(val);
                    mp.insert( {val , i });

                }

            }
        }

        return false;

        
    }
};