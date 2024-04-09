// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
//  * right(right) {}
//  * };
//  */
// #define ll long long
// class Solution {

// private:
//     void trav(TreeNode* root, ll& ans, bool& ok) {
//         if (root == NULL || ok == false) return;
//         trav(root->left, ans, ok);
//         if (ans == -1e18 || ans < root->val) ans = root->val;
//         else if (ans >= root->val) {
//             ok = false;
//             return;
//         }
//         trav(root->right, ans, ok);
//     }

// public:
//     bool isValidBST(TreeNode* root) {
//         ll ans = -1e13;
//         bool ok = true;
//         trav(root, ans, ok);
//         return ok;
//     }
// };