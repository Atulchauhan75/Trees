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
// class Solution {
//         private:
//     vector<int> pretraversal(TreeNode* root,vector<int> & ans){
//         if(root==NULL) return {};
//         ans.push_back(root->val);
//         pretraversal(root->left,ans);
//         pretraversal(root->right,ans);
//         return ans;
//     }
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         return pretraversal(root,ans);
//     }
// };