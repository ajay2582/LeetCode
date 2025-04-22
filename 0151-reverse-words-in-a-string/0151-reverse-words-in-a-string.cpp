class Solution {
public:

            int  firstf( string s) {

                int len = s.length();

                int ans = 0;

                for(int i = 0 ; i < len;i++){

                    if(s[i] != ' ') {

                        ans =  i ;

                        break;


                    }
                }

                return ans ;





            }

             int lastf(string s ) {

                int ans = 0;
                int len = s.length();

                for(int i = len - 1 ; i >= 0 ; i--) {

                    if( s[i] != ' ') {

                        ans = i ;
                        break;

                    }
                }

                return ans;


            }
    

    
    string reverseWords(string s) {


       

            int first =  firstf( s );
          int last =   lastf( s );

             last++;





        
        // s+=" ";


        string ans = "";



        stack<string>st;
        int len = s.length();
        string str = "";
        bool flag = true;
        s+=' ';

        for(int i = first ; i <=   last ; i++){

            if(s[i] != ' ') {
                str+=s[i];

                flag = false ;



            }

            else {

                if( flag == false ) {


                st.push(str);
                str = "";

                flag = true;
                

                }
            }
        }

      

        while(st.size() != 1) {

            ans += st.top();
            st.pop();
            ans += " ";

        }

        ans += st.top();

                    

        return ans;




       


        
    }
};