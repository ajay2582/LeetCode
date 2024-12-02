class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int len = searchWord.length();
        sentence += " ";
        int n = sentence.length();
        int cnt = 1;
        unordered_map<string , int > mp;
            string str = "";
        for(int i = 0 ; i < n ;i++){
            if(sentence[i] != ' ') {
                str += sentence[i];

            }
            else {
                mp.insert( {str , cnt} );
                str = "";
                cnt++;

            }
          
        }

        int mini = INT_MAX;

        for(auto it : mp) {
            string pick = it.first;
            int val = it.second;
            if(pick.find(searchWord) != string::npos) {
                int idx  = pick.find(searchWord);
                if( idx == 0) {


                     mini = min( mini , val);

                }

            }
        }

          if( mini != INT_MAX) {
            return mini;
          }

          return -1;


        
    }
};