class Solution {
public:
    bool isAnagram(string s, string t) {

        

        int slen = s.length();
        int tlen = t.length();
        if( slen != tlen) {
            return false;
        }

        vector<int> len(26 , 0);
        for( int i = 0 ; i < slen;i++){

            char ch = s[i];
            len[ch - 'a']++;
            
        }
        for( int i = 0 ; i < slen;i++){

            char ch = t[i];
            len[ch - 'a']--;

        }

        for( int i = 0 ; i< 26;i++){

            if( len[i] > 0) {
                return false;
            }
        }


        return true;



        
    }
};