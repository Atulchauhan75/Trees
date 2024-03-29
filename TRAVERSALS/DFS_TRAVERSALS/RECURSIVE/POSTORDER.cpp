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
//     vector<int> posttraversal(TreeNode* root,vector<int> & ans){
//         if(root==NULL) return {};
//         posttraversal(root->left,ans);
//         posttraversal(root->right,ans);
//         ans.push_back(root->val);
//         return ans;
//     }
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         return posttraversal(root,ans);
//     }
// };