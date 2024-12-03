class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string temp ="";
        int n = s.length();
            int j = 0;
            int m = spaces.size();

            int idxval = spaces[j];
        for(int i = 0 ; i < n;i++){

            if(idxval == i) {
                temp+=' ';
                temp+=s[i];
                j++;

                if( j < m) {


                idxval = spaces[j];

                }

            }
            else {

                temp += s[i];

            }


        }

        return temp;

    }
    
};