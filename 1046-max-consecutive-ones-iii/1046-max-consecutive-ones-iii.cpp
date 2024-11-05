// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int n = nums.size();
//         int i = 0;
//         int j = 0 ;
//         int maxi = -1e9;
//         unordered_map<int , int > mp;

//         if( n <= k) {

//             return n ;

//         }
//         while( j < n) {

//             mp[nums[j]]++;
//             if( mp.find(0) == mp.end() || mp[0] < k) {
//                 j++;
//             }
//             else if( mp[0] == k) {

//                 maxi = max( maxi , j - i + 1);
//                 j++;



//             }
//             else if( mp[0] > k) {

//                 while( mp[0] > k) {

//                     mp[nums[i]]--;
//                     // if( mp[nums[i]] == 0) {

//                     //     mp.erase(nums[i]);

//                     // }

//                     i++;

//                 }

//                 j++;

//             }
//         }



//        if( maxi == -1e9) {
//         return 0 ;

//        }
//         return maxi ;


        
//     }
// };


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        int maxi = 0;  // Start with 0 since we want to maximize it
        unordered_map<int, int> mp;

        while (j < n) {
            mp[nums[j]]++;
            
            // Check if the number of zeros in the current window is within the allowed flips
            if (mp[0] <= k) {
                maxi = max(maxi, j - i + 1);
                j++;
            } else {
                // When there are more than `k` zeros, we need to shrink the window from the left
                while (mp[0] > k) {
                    mp[nums[i]]--;
                    if (mp[nums[i]] == 0) {
                        mp.erase(nums[i]);
                    }
                    i++;
                }
                j++;
            }
        }

        return maxi;
    }
};
