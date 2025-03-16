/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool helper( TreeNode *root , long long  int min , long long  int max){
        if(root == NULL){
            return true;
        }
        if( root ->val <= min || root ->val >= max   )
        {
            return false;
        }

        bool lefti =   helper(root ->left , min , root ->val);
        bool righti = helper(root ->right , root ->val , max);


        return     lefti && righti;
        
                


    }
    bool isValidBST(TreeNode* root) {

          long long int  min = -10000000000;
          long long int  max = 10000000000;

        return helper(root , min , max );



        
    }
};