class Solution {
public:
bool calling( string & a , string &b){
    if( a + b > b + a){
        return true;
    }
    else {
        return false;
    }
}
    string largestNumber(vector<int>& nums) {

      
       
        string str ="";
        vector<string>res;
        for(int i = 0 ;i < nums.size();i++){
            
            res.push_back(to_string(nums[i]));
        }
        // sort(res.begin(), res.end() , calling( string &a,  string &b));?
         std::sort(res.begin(), res.end(), [this](std::string& a, std::string& b) {
            return this->calling(a, b);
        });
        if(res[0] == "0"){
            return "0";
        }

        for(int i = 0 ;i < res.size();i++){
            str += res[i];
        }
        // if(str.find("0") != string::npos){
        //     int index = str.find("0");
            
        //     char ch = str[index-1];
        //     if(str.find(ch , index + 1) != string::npos){
        //         int index2 = str.find(ch , index + 1);
        //         int diff = index2 - index;

        //     str.erase(index , diff);
        //      for(int i = 1 ;i <= diff;i++){
        //         str += "0";
        //      }
        //     }
        // }

        return str;
        
    }
};