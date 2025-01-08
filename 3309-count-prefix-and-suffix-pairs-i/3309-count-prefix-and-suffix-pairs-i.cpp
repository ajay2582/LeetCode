class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int cnt =0;
        for(int i = 0 ; i< n - 1 ;i++){
            for(int j = i + 1 ; j < n ;j++){
                string str = words[i];
                string temp = words[j];
                int len = str.length();
                // int k1 = 0;
                string temp2 ="";
                string temp3 = "";

                int len1 = temp.length();
                int k = 0;
                if(len1 >= len){

                for( k = 0 ; k < len;k++){
                    temp2+=temp[k];
                    
                    // k1 = k;
                }
                }
                // int l1 = 0;
                int cal = len1-len;
                int l = 0;

                if(len1 >= len){

                for( l = cal ;l < len1;l++){

                    temp3+=temp[l];

                    
                    
                    // l1=l;
                }
                }

                if(str == temp2 && str == temp3){
                    cnt++;
                }
              
            }
        }

        return cnt;
        
    }
};