class Solution {
public:
    string compressedString(string word) {
       


        map< char  , int > mp;
        string comp="";

        int n = word.length();
        for( int i = 0 ; i <= n -1 ;i++){

            if( word[i] == word[i+1] ) {


            mp[word[i]]++;

            }

            else {

                mp[word[i]]++;


            

        for( auto it : mp) {

            int total = it.second;
            char fist = it.first;

            if( total <= 9 ) {

                char ch =    '0' + total;
                comp += ch;
                comp+= fist;




            }
            else {

                while( total > 9) {

                    comp += '9';
                    comp += fist;
                     total -= 9;

                }

                 char ch2 = '0' + total;
                 comp += ch2;
                 comp +=fist;



            }


            mp.erase(fist);
        }

            


            }


        }




        return comp ;









        
    }
};