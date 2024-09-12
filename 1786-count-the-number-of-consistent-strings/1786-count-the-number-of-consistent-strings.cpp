class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> check(256 , 0);
        int len = allowed.length();
        int res = 0;
        bool flag = true;
        for(int i = 0; i< len;i++){
            char one = allowed[i];
            int index = one - 'a';
            check[index]++;

        }
        int siz = words.size();
        for(int i = 0 ; i<siz;i++){
            string str = words[i];
            
            for(int j = 0;j <str.length();j++){
               

                char fis = str[j];
                int index2 = fis - 'a';
                if(check[index2] == 0){
                    flag = false;
                    break;
                }

                
            }
           
            if(flag){
                res++;
            }
            flag = true;


        }
        return res;

        
    }
};