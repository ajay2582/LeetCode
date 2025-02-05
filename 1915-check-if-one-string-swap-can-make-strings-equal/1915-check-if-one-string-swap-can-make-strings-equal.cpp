class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.length();
        if(s1==s2) {
            return true;
        }
        int idx1=-1;
        int idx2=-1;
        bool flag = false;
        for(int i = 0 ; i < n ;i++){
            char ch1=s1[i];
            char ch2=s2[i];
            if(ch1!=ch2) {
                if(flag==false) {
                    idx1=i;
                    flag=true;
                }
                else {
                    idx2=i;

                }
            }

        }

        if(idx1 == -1 || idx2 == -1) {
            return false;
        }


        char ch1 = s2[idx1];
        char ch2 = s2[idx2];
        s2[idx1] = ch2;
        s2[idx2] = ch1;
        if(s1==s2){
            return true;
        }

        return false;
        
        
    }
};