class Solution {
public:
    int minimumLength(string s) {

        int len = s.length();
        vector<int>freq(26 , 0);
        int ans = 0;


        for(int i = 0 ; i < len;i++) {
            char ch = s[i];
            int index = ch - 'a';
            freq[index]++;


        }

        for(int i = 0 ; i < 26;  i++){

            int val = freq[i];
            while(val >= 3) {
                val-=2;
            }

            ans+=val;
           

        }

        return ans ;
        // int len = s.length();
        // if( len <= 2) {
        //     return len;
        // }
       
        
        // for(int i =  1 ; i < len; i++){
        // stack<pair<char , int >> stleft;
        // stack<pair<char , int >> stright;
        
        //     char ch = s[i];
        //     if(ch == '#') {
        //         continue;
        //     }
        //     for(int j = 0 ; j < i; j++){
        //         char chleft = s[j];
        //         if(chleft == ch ) {

        //             stleft.push({ch , j});


        //         }

        //     }
        //     for(int k  = len - 1 ; k >i; k--) {

        //         char chright = s[k];
        //         if(chright == ch) {
        //             stright.push({ch , k });
        //         }


        //     }

        //     if(stleft.empty() == true || stright.empty() == true ) {
        //         continue;
        //     }

            

        //     int leftindex = stleft.top().second;
        //     int rightindex = stright.top().second;

        //     s[leftindex] = '#';
        //     s[rightindex] = '#';

            



 




        // }

        //   int ans = 0;
        //   for(int i = 0 ; i < len;i++){

        //     if(s[i] != '#') {
        //         ans++;
        //     }

        //   }

        //   return ans;
       





        
        
    }
};