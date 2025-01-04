// class Solution {
// public:

//        void   printsub(string &s ,  int index , int &len , string &temp, set<string> &res){
//             if(index == len){

//                 if(temp.length()==3){


//                 res.insert(temp);
//                 }
//                 string temp ="";
//                 return ;


               
            

//             }
//             temp += s[index];
//             printsub(s , index + 1, len , temp , res);
//             temp.pop_back();
//             printsub(s , index + 1 , len , temp , res);

//     }


//     int countPalindromicSubsequence(string s) {
//         int ans = 0 ;
//         int index = 0;
//         int len = s.length();
//         string temp ="";
        
//            set<string>res;
//         printsub( s , index , len , temp , res);
          
//            for(auto it : res){
//             string temp1 = it;
            
//             if(temp1[0] == temp1[2]) {
//                 ans++;
//             }
            
                
            
//            }

//            return ans;




        
        
// //     }
// // };


class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char> letters;
        for (char c : s) {
            letters.insert(c);
        }
        
        int ans = 0;
        for (char letter : letters) {
            int i = -1;
            int j = 0;
            
            for (int k = 0; k < s.size(); k++) {
                if (s[k] == letter) {
                    if (i == -1) {
                        i = k;
                    }
                    
                    j = k;
                }
            }
            
            unordered_set<char> between;
            for (int k = i + 1; k < j; k++) {
                between.insert(s[k]);
            }
            
            ans += between.size();
        }
        
        return ans;
    }
};


