class Solution {
public:

    int f( vector<int> & nums , int goal) {


            map<int , int> mp;
        mp[0] = 1 ;

        int presum = 0 ;
        int cnt = 0 ;
        for( int  i =0 ; i < nums.size();i++){

            presum += nums[i];
            int remove = presum - goal;
            cnt += mp[remove];

            mp[presum]++;



        }

        return cnt ;
    }
    int numberOfSubarrays(vector<int>& nums, int goal) {


      vector<int> temp;
      for( int i = 0  ;i < nums.size();i++){

        if( nums[i] % 2 != 0) {

            temp.push_back(1);


        }
        else {
            temp.push_back(0);

        }
      }



      return f( temp , goal);

        
    }
};