class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        // int maxi = 0 ;
        // int len1 = arr1.size();
        // int len2 = arr2.size();
        
        // for(int i  = 0 ; i<len1;i++){
        //     for(int j = 0; j < len2;j++){
        //         string str1 = to_string(arr1[i]);
        //         int lenstr1 = str1.length();
        //         string str2 = to_string(arr2[j]);
        //         if(str2.find(str1)!=string::npos){
        //             int index = str2.find(str1);
        //             if(index == 0){

        //             maxi = max(maxi , lenstr1);
        //             }
        //         }
        //         else{
        //             int len3 = str1.length();
        //             int len4 = str2.length();
        //             int k = 0;
        //             int l = 0;
        //             int cnt = 0;

        //             while(k < len3 && l <len4)
        //             {
        //                  if(str1[k] != str2[l]) {
        //                     // continue;
        //                     break;

        //                  }
                        
        //                  if(str1[k] == str2[l] ){
        //                     cnt+=1;
        //                     maxi=max(maxi , cnt);
        //                  }
        //                  k++;
        //                  l++;
        //             }
        //         }

        //     }
        // }
        // return maxi;

          unordered_map<string, int> prefixMap;
        
        // Step 1: Build the prefix map for arr1
        for (int num : arr1) {
            string strNum = to_string(num);
            string prefix = "";
            for (char ch : strNum) {
                prefix += ch;
                prefixMap[prefix]++;
            }
        }
        
        int maxLength = 0;
        
        // Step 2: Check for common prefixes in arr2
        for (int num : arr2) {
            string strNum = to_string(num);
            string prefix = "";
            for (char ch : strNum) {
                prefix += ch;
                
                if (prefixMap.find(prefix) != prefixMap.end()) {
                          int len = prefix.length();
                    maxLength = max(maxLength, len );
                }
            }
        }
        
        return maxLength;



        
    }
};