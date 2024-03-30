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
 


//  //METHOD->1
// class Solution {
//     private:
//     int check(TreeNode* node , bool& ok){
//         if(node == NULL) return 0;
//         int l= check(node->left,ok);
//         int r=check(node->right,ok);
//         if(abs(l-r)>1) ok=false;
//         return 1+max(l,r);
//     }
// public:
//     bool isBalanced(TreeNode* root) {
//         if(root==NULL) return true;
//         int lh =findHeight(root->left);
//         int rh=findHeight(root->right);
//         if(abs(lh-rh)>1) return false;
//         bool l=isBalanced(root->left);
//         bool r=isBalanced(root->right);
//         if(!l || !r) return false;
//         return true;
//     }
// };



//METHOD->2
// class Solution {
//     private:
//     int check(TreeNode* node , bool& ok){
//         if(node == NULL) return 0;
//         int l= check(node->left,ok);
//         int r=check(node->right,ok);
//         if(abs(l-r)>1) ok=false;
//         if(!ok) return 0;
//         return 1+max(l,r);
//     }
// public:
//     bool isBalanced(TreeNode* root) {
//         bool ok=true;
//         check(root,ok);
//         return ok;
//     }
// };