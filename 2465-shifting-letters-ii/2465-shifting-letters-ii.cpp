// class Solution {
// public:


//     string shiftingLetters(string s, vector<vector<int>>& shifts) {
//         int n = shifts.size();
//         for(int i = 0 ; i < n ;i++){
//             int start = shifts[i][0];
//             int end = shifts[i][1];
//             int flow = shifts[i][2];

//             for(int j = start ; j<= end;j++){
//                 if( flow == 1) {
//                     char ch = s[j];
//                     int val = ch - 'a';
//                     int cal = val + 1;
//                     if(cal == 26) {
//                         s[j] = 'a';
//                     }else {

//                     char ch2 = 'a' + cal;
//                         s[j] = ch2;
//                     }

//                     }else {
//                     char ch = s[j];
//                     int val = ch - 'a';
//                     int cal = val - 1;
//                     if(cal == -1 ) {
//                         s[j] = 'z';
//                     }else {

//                     char ch2 = 'a' + cal;
//                         s[j] = ch2;
//                     }



//                 }

//             }

//         }

//         return s;


        
        
//     }
// };

class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.length();
        vector<int> diff(n + 1, 0);

        // Step 1: Process shifts using a difference array
        for (auto& shift : shifts) {
            int start = shift[0], end = shift[1], direction = shift[2];
            int value = (direction == 1) ? 1 : -1;
            diff[start] += value;
            if (end + 1 < n) diff[end + 1] -= value;
        }

        // Step 2: Compute prefix sum to get net shifts
        int currentShift = 0;
        for (int i = 0; i < n; ++i) {
            currentShift += diff[i];
            currentShift = (currentShift % 26 + 26) % 26; // Ensure non-negative shift
            s[i] = 'a' + (s[i] - 'a' + currentShift) % 26;
        }

        return s;
    }
};
