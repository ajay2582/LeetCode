class Solution {
public:
    void dfs(vector<vector<int>>image,
     vector<vector<int>>&temp,  int sr , int sc , int color , int val , vector<int>&delrow, vector<int>&delcol){
             int n = temp.size();
             int m = temp[0].size();
             temp[sr][sc] = color;
           
             for(int i = 0 ; i<4;i++){
                int newrow = sr + delrow[i];
                int newcol = sc + delcol[i];
                if(newrow >=0 && newrow < n && newcol >=0 &&newcol <m   ){

                    if(image[newrow][newcol] == val && temp[newrow][newcol] != color) {

                    
                    dfs(image,temp,newrow,newcol,color,val,delrow,delcol);
                    }
                }
             }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
          vector<int>delrow = {-1 , 0 , 1 , 0};
             vector<int>delcol = { 0 , 1 , 0 , -1};

        vector<vector<int>>temp = image ;

        dfs( image , temp , sr , sc , color , val , delrow ,delcol);
        return temp;
        
    }
};