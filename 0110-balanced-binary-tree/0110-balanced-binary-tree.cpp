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
private:
             int maxDepth(TreeNode* root) {

        if( root == NULL ){
            return 0;
            
        }
        

        int left = maxDepth(root ->left);
        int right = maxDepth(root ->right);
        int ans = max( left , right );
        return ans + 1 ;

        
    }
public:

    bool isBalanced(TreeNode* root) {

        if( root == NULL){
            return true ;

        }


        int lh = maxDepth(root -> left);
        int rh = maxDepth(root ->right);
        if( abs(rh - lh ) > 1){
            return false;
        }

         return isBalanced(root ->left ) && isBalanced(root->right);
         
        


        
    }
};