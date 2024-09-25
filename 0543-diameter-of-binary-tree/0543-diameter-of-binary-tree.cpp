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
         int findleft(TreeNode * root){

            if(root == NULL){
                return 0;

            }
            int lh = findleft(root ->left);
            int rh = findleft(root ->right);
            return 1 + max(lh , rh );
         }
        int maxi = 0 ;
    int diameterOfBinaryTree(TreeNode* root) {

        if(root == NULL){
            return 0;
        }
        int left = findleft(root->left);
        int right = findleft(root->right);
        maxi = max(maxi , left + right);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxi;


        
    }
};