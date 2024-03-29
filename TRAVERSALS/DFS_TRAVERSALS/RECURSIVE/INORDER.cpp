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
//     vector<int> intraversal(TreeNode* root,vector<int> & ans){
//         if(root==NULL) return {};
//         intraversal(root->left,ans);
//         ans.push_back(root->val);
//         intraversal(root->right,ans);
//         return ans;
//     }
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         return intraversal(root,ans);
//     }
// };