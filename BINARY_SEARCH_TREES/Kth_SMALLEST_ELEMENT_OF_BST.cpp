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
//  int ans=0;
// class Solution {
//     void trav(TreeNode* root , int &k,int &cnt){
//         if(root==NULL) return;
//         trav(root->left,k,cnt);
//         cnt++;
//         if(k==cnt) {
//         ans=root->val;
//         return;
//         }
//         trav(root->right,k,cnt);
//     }
// public:
//     int kthSmallest(TreeNode* root, int k) {
//         int cnt=0;
//          trav(root,k,cnt);
//          return ans;
//     }
// };