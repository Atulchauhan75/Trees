// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
//     private:
//     int check(TreeNode* node , int & ans){
//         if(node == NULL) return 0;
//         int l= check(node->left,ans);
//         int r=check(node->right,ans);
//         ans=max(ans,l+r);
//         return 1+max(l,r);
//     }
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         int ans=0;
//         check(root,ans);
//         return ans;
        
//     }
// };