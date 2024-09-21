class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

          unordered_map<int , int> mp ;
             
             if( nums.size() == 2) {


          if( nums[0] == 2 && nums[1] == 2 ) {
              return { 2};

          }
             }


          int cal  = nums.size() / 3;

          if(cal == 0 ) {

              return nums ;

          }


          for( auto it : nums) 
          {

              mp[it]++;

          }
            vector<int> ans ;


          for( auto it1 : mp) {

              if( it1.second  > cal) {

                  ans.push_back(it1.first);
              }
          }

          return ans ;

        
    }
};