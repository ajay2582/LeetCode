class Solution {
public:
    int minBitFlips(int start, int goal) {

        bitset<64>  st(start);
        bitset<64>   gl(goal);
        int res = 0;
        int n = st.size();
        for(int i= n - 1 ; i >=0 ;i-- ){
            char one =  st[i];
            char two =  gl[i];
            if(one != two){
                res++;
            }

        }
        return res;


        
        
    }
};