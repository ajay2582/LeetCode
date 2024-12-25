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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root == NULL) {
            return ans ;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false){

            vector<int>temp;
            int cnt = q.size();
            for(int i = 0 ; i < cnt;i++){
                TreeNode * node = q.front();
                q.pop();
                temp.push_back(node->val);


                if(node->left != NULL){
                    q.push(node->left);

                }
                if(node ->right != NULL){
                    q.push(node ->right);

                }
            }

            int maxi = *max_element(temp.begin(), temp.end());
            ans.push_back(maxi);



        }

        return ans ;



        
    }
};