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
      int fun(TreeNode * root , int & maxi ){
        if(root == NULL){
            return 0;

        }
        int lt =   max( 0 , fun(root->left , maxi ));
        int rt =   max ( 0  , fun(root->right , maxi));
        
          
          maxi = max( maxi , lt + rt + root ->val);
        return  max(lt ,rt ) + root ->val;
      }

    int maxPathSum(TreeNode* root) {
       
        if(root == NULL){
            return 0;
        }

    int maxi = -1e9;

         fun(root  , maxi );


          
        return maxi;

        
    }
};